boot = open("boot.bin",'rb')
disc = open("discpy.img","wb")

boottext=boot.read()
boot.close()
disc.write(boottext)
disc.seek(0x1FE,0)
disc.write(b'\x55\xAA')

code = open("main.bin","rb")
codeText = code.read();
code.seek(codeText.find(b'\x55\x89'),0)
codeText = code.read();
disc.write(codeText)

for i in range(100000):
	disc.write(b"\x01")
code.close()

disc.close()

print("all OK")