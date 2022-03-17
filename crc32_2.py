import zlib
import struct

with open("nucleo_test.bin", "rb") as f:
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
with open("nucleo_test_2.bin", "ab") as f2:
    for i in range(128):
        f2.write(newresult)
f2.close()

with open("nucleo_test_2.bin", "ab") as f3:
    f3.write(data)
f3.close()

with open("nucleo_test_2.bin", "rb") as f4:
    newdata = f4.read()
f4.close()

print("file length : %d" % len(newdata))

