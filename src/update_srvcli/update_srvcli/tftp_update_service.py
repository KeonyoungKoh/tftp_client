from wsgiref.simple_server import software_version
from tftp_update.srv import FirmwareUpdate
import zlib
import struct

import rclpy
from rclpy.node import Node

import time
import tftpy

global board_version, board_validity

def crc32(version):

    open_file_name = version + ".bin"
    
    with open(open_file_name, "rb") as f:
        data = f.read()
    f.close()
        
    result = zlib.crc32(data) & 0xffffffff

    newresult = struct.pack('<I', result)
    
    softwareVersion = struct.pack('<I', int(version)) # modify version

    send_file_name = version + "_crc.bin"

    with open(send_file_name, "ab") as f2:
        f2.write(softwareVersion)
        for i in range(127):
            f2.write(newresult)
        f2.write(data)
    f2.close()

    with open(send_file_name, "rb") as f3:
        newdata = f3.read()
    f3.close()
    print(len(newdata))
    return send_file_name

class UpdateService(Node):
    def __init__(self):
        super().__init__('update_server')
        self.srv = self.create_service(FirmwareUpdate, 'firmware_update', self.firmware_update_callback)
        
        ############################################################
        # client = tftpy.TftpClient('192.168.0.181', 69)
        # client.download('version.bin', 'version.bin', timeout = 10)
        # print("hello?1")
        
        # with open('version.bin', "rb") as f:
        #     data = f.read()
        # f.close()
        # board_version = data[0]
        # board_validity = data[1]
        # print('initializing over')
        
        
    def firmware_update_callback(self, request, response):
        
        # if request.will_update == 1:
        #     self.get_logger().info("opening tftp client...")
        #     time.sleep(1)
        #     self.get_logger().info("updating...")

        #     try:
        #         client = tftpy.TftpClient(request.host, 69)
        #         file_name = crc32(request.filename)
        #         client.upload(file_name, file_name, timeout = 10)
        #         response.success = 1
        #     except:
        #         response.success = 0
        # else:
        #     response.success = 1
        
        client = tftpy.TftpClient('192.168.0.181', 69)
        client.download('version.bin', 'version.bin', timeout = 10)
        client.download('is_valid.bin', 'is_valid.bin', timeout = 10)
        
        with open('version.bin', "rb") as f:
            data = f.read()
        f.close()
        board_version = int(data[0])
        with open('is_valid.bin', "rb") as f2:
            data2 = f2.read()
        f2.close()
        board_validity = int(data2[0])
        
        if int(request.filename) == int(board_version) and board_validity == 1:
            try:
                client1 = tftpy.TftpClient(request.host, 69)
                client1.upload("update_no.bin", "update_no.bin", timeout = 10)
                response.success = 1
            except:
                response.success = 0
                
        else:
            try:
                client1 = tftpy.TftpClient(request.host, 69)
                client1.upload("update_yes.bin", "update_yes.bin", timeout = 10)
                time.sleep(2)
                client2 = tftpy.TftpClient(request.host, 69)
                file_name = crc32(request.filename)
                client2.upload(file_name, file_name, timeout = 10)
                response.success = 1
            except:
                response.success = 0

        self.get_logger().info('Update request -> host: %s software version: %s' % (request.host, request.filename))

        return response
    
def main(args = None):
    rclpy.init(args = args)
    
    update_server = UpdateService()
    
    rclpy.spin_once(update_server)
    
    rclpy.shutdown()
    
if __name__ == '__main__':
    main()
