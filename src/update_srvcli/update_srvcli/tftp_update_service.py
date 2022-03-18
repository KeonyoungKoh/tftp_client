from tftp_update.srv import FirmwareUpdate

import rclpy
from rclpy.node import Node

import time
import tftpy

class UpdateService(Node):
    def __init__(self):
        super().__init__('update_server')
        self.srv = self.create_service(FirmwareUpdate, 'firmware_update', self.firmware_update_callback)
        
    def firmware_update_callback(self, request, response):
        
        if request.will_update == 1:
            self.get_logger().info("opening tftp client...")
            time.sleep(1)
            self.get_logger().info("updating...")

            client = tftpy.TftpClient(request.host, 69)
            client.upload(request.filename, request.filename, timeout = 60)
        
        # add error detection during uploading
        response.success = 1
        self.get_logger().info('Update request -> host: %s filename: %s' % (request.host, request.filename))

        return response
    
def main(args = None):
    rclpy.init(args = args)
    
    update_server = UpdateService()
    
    rclpy.spin(update_server)
    
    rclpy.shutdown()
    
if __name__ == '__main__':
    main()
