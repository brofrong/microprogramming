import math
bitMap = open('fontText.txt','r');
font = open('font.tf','wb');
fontText= bitMap.read();
bitMap.close();

widthPosition = fontText.find("FONT_WIDTH:");
if (widthPosition==-1):
    print("не найдена строчка FONT_WIDTH:")
    raise SystemExit(1)
enterPos = fontText.find("\n",widthPosition);
width = int(fontText[widthPosition+11:enterPos]);

heightPosition = fontText.find("FONT_HEIGHT:");
if (heightPosition==-1):
    print("не найдена строчка FONT_HEIGHT:")
    raise SystemExit(1)
enterPos = fontText.find("\n",heightPosition);
heigh = int(fontText[heightPosition+12:enterPos]);

sizeOfOneLetter = int((width*heigh + (8-(width*heigh)%8))/8);

sizeFromLetterToanatherLetter = 2+(width+1)*heigh;


dataStartPosition = fontText.find("FONT_DATA:");
if(dataStartPosition==-1):
    print("не найдена строчка FONT_DATA:")
    raise SystemExit(1)

fontData = fontText[dataStartPosition+11:];

for i in range(0,math.ceil(len(fontData)/sizeFromLetterToanatherLetter)):
    letter = fontData[i*sizeFromLetterToanatherLetter:1+i*sizeFromLetterToanatherLetter];
    bits = fontData [2+i*sizeFromLetterToanatherLetter:sizeFromLetterToanatherLetter+i*sizeFromLetterToanatherLetter];
    bit = "";
    for j in range (0,heigh):
        bit+=(bits[0+j*(width+1):width+j*(width+1)]);

    byteArr = []
    for j in range(0,8-len(bit)%8):
        bit += "0";


    for j in range(0,math.ceil(len(bit)/8)):
        bitval = bit[j*8:8+j*8];
        counter = heigh;
        val=0;
        for x in bitval:
            val += int  (x)*2**counter;
            counter-=1;

        byteArr.append(val);
    font.seek(ord(letter)*sizeOfOneLetter,0);
    font.write((''.join(chr(i) for i in byteArr)).encode('charmap'));

font.seek(0,0);
font.write((chr(width)).encode('charmap'));
font.seek(1,0);
font.write((chr(heigh)).encode('charmap'));
font.seek(2,0);
font.write((chr(sizeOfOneLetter)).encode('charmap'));

font.close();
#print("size of letter:"+str(sizeOfOneLetter));
print("font Done!");
