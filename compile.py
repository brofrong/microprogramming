import math
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


#img = open("img/totoro.bmp","rb")
#imgbit = img.read();

#disc.write(imgbit);
#img.close();


disc.seek(0x5000,0);
imgs = ['img/totoro.bmp','img/castle.bmp','img/gurren.bmp','img/dark-souls.bmp','img/water.bmp','img/room.bmp'];
#imgs = ['img/1_100.bmp','img/1-320.bmp','img/2-320.bmp','img/3_320.bmp'];
for x in imgs:
	img = open(x,"rb")
	imgbit = img.read();

	nextPosition = math.ceil(disc.tell()/512) * 512;

	print(nextPosition/512);
	
	disc.seek(nextPosition - disc.tell(),1);
	disc.write(imgbit);
	img.close();





disc.close()

print("all OK")