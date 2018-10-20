import math
bitMap = open('fontText.txt','r');
font = open('font.tf','wb');

fontText = bitMap.read();

bitMap.close();

for i in range(0,int(len(fontText)/44)):
    letter = fontText[i*44:1+i*44];
    bits = fontText [2+i*44:43+i*44];
    bit = "";
    for j in range (0,7):
        bit+=(bits[0+j*6:5+j*6]);

    byteArr = []

    for j in range(0,8-len(bit)%8):
        bit += "0";


    for j in range(0,math.ceil(len(bit)/8)):
        bitval = bit[j*8:8+j*8];
        counter = 7;
        val=0;
        for x in bitval:
            val += int(x)*2**counter;
            counter-=1;

        byteArr.append(val);
    font.seek(ord(letter)*5,0);
    font.write((''.join(chr(i) for i in byteArr)).encode('charmap'));


font.close();
