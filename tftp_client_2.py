import zlib
import struct
import tftpy

open_file_name = input('enter file name : ')

with open(open_file_name, "rb") as f:
    data = f.read()
f.close()
    
result = zlib.crc32(data) & 0xffffffff
print(type(result))
print("file length : %d" % (len(data)))
print("%08X" % (result))

print(struct.pack('<I', result))

newresult = struct.pack('<I', result)
print(type(newresult))

# packet for communication
# 다른 정보 전송할 경우 첫 512B 패킷 사용해서 전달

send_file_name = input('enter new file name : ')

with open(send_file_name, "ab") as f2:
    for i in range(128):
        f2.write(newresult)
f2.close()

with open(send_file_name, "ab") as f3:
    f3.write(data)
f3.close()

with open(send_file_name, "rb") as f4:
    newdata = f4.read()
f4.close()

print("file length : %d" % len(newdata))

client = tftpy.TftpClient('192.168.0.181', 69)
client.upload(send_file_name, send_file_name, timeout = 60)