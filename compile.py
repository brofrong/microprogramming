boot = open("boot.bin",'rb')
disc = open("discpy.img","wb")

boottext=boot.read()
boot.close()
disc.write(boottext)
for i in range(100000):
	disc.write(b"\x90")
disc.seek(0x1FE,0)
disc.write(b'\x55\xAA')

code = open("main.bin","rb")
codeText = code.read();
code.seek(codeText.find(b'\x55\x89'),0)
codeText = code.read();
disc.write(codeText)
code.close()

data = open("core/font/font.tf","rb")
dataText = data.read();
disc.seek(0x3000,0);
disc.write(dataText);
data.close();

disc.close()

print("all OK")