import tftpy
import threading
from datetime import datetime

class PYTFTPServer(object):
    def __init__(self, tftp_ip_addr, tftp_folder):
        self.tftp_ipp_addr = tftp_ip_addr
        self.tftp_folder = tftp_folder
        self.tftp_server = tftpy.TftpServer(self.tftp_folder)
    
    def start_tftp_server(self):
        try:
            print(get_current_time() + 'TFTP Server : TFTP Server starting')
            self.tftp_server.listen(self.tftp_ip_addr, 69)
        except KeyboardInterrupt:
            pass
    
    def stop_tftp_server(self):
        self.tftp_server.stop()
        print(get_current_time() + 'TFTP Server : TFTP Server stopped')
        
def start_tftp_process(tftp_ip_addr, tftp_folder):
    global tftpsrv, TFTP_srv_thread
    tftpsrv = PYTFTPServer(tftp_ip_addr, tftp_folder)
    TFTP_srv_thread = threading.Thread(name = "TFTP Server thread", target = tftpsrv.start_tftp_server)
    TFTP_srv_thread.start()
    return tftpsrv

def stop_tftp_process():
    tftpsrv.stop_tftp_server()
    TFTP_srv_thread.join()
    return tftpsrv
