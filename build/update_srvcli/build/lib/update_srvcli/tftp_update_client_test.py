from tftp_update.srv import FirmwareUpdate

# import sys
import rclpy
from rclpy.node import Node


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
        self.req.filename = input("Select software version : ")
        
        print("\n\n\n\n\n\n")
        print(" __ __  ____  ___     ____  ______  ____  ____    ____       _____  ___   _____  ______  __    __   ____  ____     ___             ")
        print("|  |  ||    \|   \   /    ||      ||    ||    \  /    |     / ___/ /   \ |     ||      ||  |__|  | /    ||    \   /  _]            ")
        print("|  |  ||  o  )    \ |  o  ||      | |  | |  _  ||   __|    (   \_ |     ||   __||      ||  |  |  ||  o  ||  D  ) /  [_             ")
        print("|  |  ||   _/|  D  ||     ||_|  |_| |  | |  |  ||  |  |     \__  ||  O  ||  |_  |_|  |_||  |  |  ||     ||    / |    _]            ")
        print("|  :  ||  |  |     ||  _  |  |  |   |  | |  |  ||  |_ |     /  \ ||     ||   _]   |  |  |  `  '  ||  _  ||    \ |   [_   __  __  __ ")
        print("|     ||  |  |     ||  |  |  |  |   |  | |  |  ||     |     \    ||     ||  |     |  |   \      / |  |  ||  .  \|     | |  ||  ||  |")
        print(" \__,_||__|  |_____||__|__|  |__|  |____||__|__||___,_|      \___| \___/ |__|     |__|    \_/\_/  |__|__||__|\_||_____| |__||__||__|")
        print("                                                                                                                                   ")
        print(" ____  _        ___   ____  _____   ___      __    __   ____  ____  ______                                                         ")
        print("|    \| |      /  _] /    |/ ___/  /  _]    |  |__|  | /    ||    ||      |                                                        ")
        print("|  o  ) |     /  [_ |  o  (   \_  /  [_     |  |  |  ||  o  | |  | |      |                                                        ")
        print("|   _/| |___ |    _]|     |\__  ||    _]    |  |  |  ||     | |  | |_|  |_|                                                        ")
        print("|  |  |     ||   [_ |  _  |/  \ ||   [_     |  `  '  ||  _  | |  |   |  |  __  __  __                                               ")
        print("|  |  |     ||     ||  |  |\    ||     |     \      / |  |  | |  |   |  | |  ||  ||  |                                              ")
        print("|__|  |_____||_____||__|__| \___||_____|      \_/\_/  |__|__||____|  |__| |__||__||__|   ")
        print("\n");
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
                # update_client_test.get_logger().info('Update result : %d' % (response.success))
                # put success / failure graphic here
                if response.success:
                    print("\n\n\n\n")
                    print(" __  __      __ __  ____  ___     ____  ______    ___         __   ___   ___ ___  ____  _        ___ ______    ___      __  __")
                    print("|  ||  |    |  |  ||    \|   \   /    ||      |  /  _]       /  ] /   \ |   |   ||    \| |      /  _]      |  /  _]    |  ||  |")
                    print("|  ||  |    |  |  ||  o  )    \ |  o  ||      | /  [_       /  / |     || _   _ ||  o  ) |     /  [_|      | /  [_     |  ||  |")
                    print("|__||__|    |  |  ||   _/|  D  ||     ||_|  |_||    _]     /  /  |  O  ||  \_/  ||   _/| |___ |    _]_|  |_||    _]    |__||__|")
                    print(" __  __     |  :  ||  |  |     ||  _  |  |  |  |   [_     /   \_ |     ||   |   ||  |  |     ||   [_  |  |  |   [_      __  __ ")
                    print("|  ||  |    |     ||  |  |     ||  |  |  |  |  |     |    \     ||     ||   |   ||  |  |     ||     | |  |  |     |    |  ||  |")
                    print("|__||__|     \__,_||__|  |_____||__|__|  |__|  |_____|     \____| \___/ |___|___||__|  |_____||_____| |__|  |_____|    |__||__|")
                    print("\n\n\n\n")
                    
                else: 
                    print("\n\n\n\n")
                    print(" __ __  ____  ___     ____  ______    ___      _____   ____  ____  _        ___  ___           ")
                    print("|  |  ||    \|   \   /    ||      |  /  _]    |     | /    ||    || |      /  _]|   \          ")
                    print("|  |  ||  o  )    \ |  o  ||      | /  [_     |   __||  o  | |  | | |     /  [_ |    \         ")
                    print("|  |  ||   _/|  D  ||     ||_|  |_||    _]    |  |_  |     | |  | | |___ |    _]|  D  |        ")
                    print("|  :  ||  |  |     ||  _  |  |  |  |   [_     |   _] |  _  | |  | |     ||   [_ |     | __  __ ")
                    print("|     ||  |  |     ||  |  |  |  |  |     |    |  |   |  |  | |  | |     ||     ||     ||  ||  |")
                    print(" \__,_||__|  |_____||__|__|  |__|  |_____|    |__|   |__|__||____||_____||_____||_____||__||__|")
                    print("                                                                                               ")
                    print(" ____  _        ___   ____  _____   ___      ____     ___ ______  ____   __ __         ")
                    print("|    \| |      /  _] /    |/ ___/  /  _]    |    \   /  _]      ||    \ |  |  |        ")
                    print("|  o  ) |     /  [_ |  o  (   \_  /  [_     |  D  ) /  [_|      ||  D  )|  |  |        ")
                    print("|   _/| |___ |    _]|     |\__  ||    _]    |    / |    _]_|  |_||    / |  ~  |        ")
                    print("|  |  |     ||   [_ |  _  |/  \ ||   [_     |    \ |   [_  |  |  |    \ |___, |        ")
                    print("|  |  |     ||     ||  |  |\    ||     |    |  .  \|     | |  |  |  .  \|     |        ")
                    print("|__|  |_____||_____||__|__| \___||_____|    |__|\_||_____| |__|  |__|\_||____/         ")
                    print("\n\n")
            break
        
    update_client_test.destroy_node()
    rclpy.shutdown()
    
if __name__ == '__main__':
    main()
    
