import math
boot = open("boot.bin",'rb')
disc = open("discpy.img","wb")


boottext=boot.read()
boot.close()
disc.write(boottext)
for i in range(100000):
	disc.write(b"\x00")
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

sectorsADR=[];

disc.seek(0x5000,0);
imgs = ['img/totoro.bmp','img/castle.bmp','img/gurren.bmp','img/dark-souls.bmp','img/water.bmp','img/room.bmp','img/1-320.bmp','img/2-320.bmp','img/3_320.bmp','img/1-320.bmp'];
#imgs = ['img/1_100.bmp','img/1-320.bmp','img/2-320.bmp','img/3_320.bmp'];
for x in imgs:
	img = open(x,"rb")
	imgbit = img.read();

	nextPosition = math.ceil(disc.tell()/512) * 512;
	sectorsADR.append(math.floor(nextPosition/512));
	
	disc.seek(nextPosition - disc.tell(),1);
	disc.write(imgbit);
	img.close();

byteAdrArr = [];
#print(sectorsADR);
for x in sectorsADR:
	for i in range(0,4):
		byteAdrArr.append((x//(0x100**i))%0x100);


disc.seek(0x4200,0);
disc.write((''.join(chr(i) for i in byteAdrArr)).encode('charmap'))

disc.close()




disc.close()

print("all OK")