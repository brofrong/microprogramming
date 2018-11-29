import glob
import struct

def convert(filename):
    img = open(filename,"rb");
    bit = open("./bit/"+filename[:-3]+"bit","wb");
    bmp = img.read();

    byte = bmp[0x12:0x16];
    width = struct.unpack("<L",byte)[0];

    byte = bmp[0x16:0x1A];
    height = struct.unpack("<L",byte)[0];
    byte = bmp[0xA:0xE];
    startPosition = struct.unpack("<L",byte)[0];

    img = bmp[:startPosition:-1];
    for y in range(0,height):
        bit.write(img[y*(width+2):width+y*(width+2)]);
    print(len(img)/512);




    


for filename in glob.glob("totoro.bmp"):
    print(filename)
    convert(filename);
    
    break;