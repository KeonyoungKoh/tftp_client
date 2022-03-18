from tftp_update.srv import FirmwareUpdate
import zlib
import struct

import sys
import rclpy
from rclpy.node import Node

def crc32():
    
    open_file_name = input('enter file name : ')

    with open(open_file_name, "rb") as f:
        data = f.read()
    f.close()
        
    result = zlib.crc32(data) & 0xffffffff

    newresult = struct.pack('<I', result)

    send_file_name = input('enter new file name : ')

    with open(send_file_name, "ab") as f2:
        for i in range(128):
            f2.write(newresult)
        f2.write(data)
    f2.close()

    with open(send_file_name, "rb") as f3:
        newdata = f3.read()
    f3.close()
    
    return send_file_name

class UpdateClientTest(Node):
    def __init__(self):
        super().__init__('update_client_test')
        self.cli = self.create_client(FirmwareUpdate, 'firmware_update')
        self.get_logger().info('starting service client')
        while not self.cli.wait_for_service(timeout_sec = 1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = FirmwareUpdate.Request()
        
        
    def send_request(self):
        self.req.will_update = 1
        self.req.host = '192.168.0.181'
        self.req.filename = crc32()
        self.future = self.cli.call_async(self.req)
        
def main(args = None):
    rclpy.init(args = args)
    
    update_client_test = UpdateClientTest()
    update_client_test.send_request()
    
    while rclpy.ok():
        rclpy.spin_once(update_client_test)
        if update_client_test.future.done():
            try:
                response = update_client_test.future.result()
            except Exception as e:
                update_client_test.get_logger().info('Service call failed %r' % (e,))
            else:
                update_client_test.get_logger().info('Update result : %d' % (response.success))
            break
        
    update_client_test.destroy_node()
    rclpy.shutdown()
    
if __name__ == '__main__':
    main()
    
