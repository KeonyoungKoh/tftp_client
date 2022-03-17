import tftpy

client = tftpy.TftpClient('192.168.0.181', 69)
client.upload('nucleo_test_2.bin', 'nucleo_test_2.bin', timeout = 60)