import time
import zlib
import struct
import tftpy

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

def send_update(host, filename):
    print("opening tftp client...")
    time.sleep(1)
    print("updating...")

    client = tftpy.TftpClient(host, 69)
    client.upload(filename, filename, timeout = 60)

    print("update complete")

if __name__ == '__main__':
    send_file_name = crc32()
    send_update('192.168.0.181', send_file_name)
    