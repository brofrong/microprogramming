#include <stdio.h>

unsigned char ba[7][5] ={
{0,1,1,1,0},
{1,0,0,0,1},
{1,0,0,0,1},
{1,1,1,1,1},
{1,0,0,0,1},
{1,0,0,0,1},
{1,0,0,0,1}};

unsigned char bb[7][5]={
{1,1,1,1,0},
{1,0,0,0,1},
{1,0,0,0,1},
{1,1,1,1,0},
{1,0,0,0,1},
{1,0,0,0,1},
{1,1,1,1,0}};

unsigned char bc[7][5]={
{0,1,1,1,1},
{1,0,0,0,0},
{1,0,0,0,0},
{1,0,0,0,0},
{1,0,0,0,0},
{1,0,0,0,0},
{0,1,1,1,1}};

unsigned char bd[7][5]={
{1,1,1,1,0},
{1,0,0,0,1},
{1,0,0,0,1},
{1,0,0,0,1},
{1,0,0,0,1},
{1,0,0,0,1},
{1,1,1,1,0}};

unsigned char be[7][5]={
{1,1,1,1,1},
{1,0,0,0,0},
{1,0,0,0,0},
{1,1,1,1,1},
{1,0,0,0,0},
{1,0,0,0,0},
{1,1,1,1,1}};

unsigned char bf[7][5]={
{1,1,1,1,1},
{1,0,0,0,0},
{1,0,0,0,0},
{1,1,1,0,0},
{1,0,0,0,0},
{1,0,0,0,0},
{1,0,0,0,0}};

unsigned char bg[7][5]={
{0,1,1,1,1},
{1,0,0,0,0},
{1,0,0,0,0},
{1,0,1,1,1},
{1,0,0,0,1},
{1,0,0,0,1},
{0,1,1,1,0}};

unsigned char bh[7][5]={
{1,0,0,0,1},
{1,0,0,0,1},
{1,0,0,0,1},
{1,1,1,1,1},
{1,0,0,0,1},
{1,0,0,0,1},
{1,0,0,0,1}};

unsigned char li[7][5]={
{0,0,1,0,0},
{0,0,0,0,0},
{0,0,1,0,0},
{0,0,1,0,0},
{0,0,1,0,0},
{0,0,1,0,0},
{0,0,1,0,0}};

unsigned char lj[7][5]={
{0,0,0,1,0},
{0,0,0,0,0},
{0,0,0,1,0},
{0,0,0,1,0},
{0,0,0,1,0},
{0,0,0,1,0},
{0,1,1,0,0}};

unsigned char bk[7][5]={
{1,0,0,0,1},
{1,0,0,1,0},
{1,0,1,0,0},
{1,1,0,0,0},
{1,0,1,0,0},
{1,0,0,1,0},
{1,0,0,0,1}};

unsigned char bl[7][5]={
{1,0,0,0,0},
{1,0,0,0,0},
{1,0,0,0,0},
{1,0,0,0,0},
{1,0,0,0,0},
{1,0,0,0,0},
{1,1,1,1,1}};

unsigned char bm[7][5]={
{1,1,0,1,1},
{1,0,1,0,1},
{1,0,1,0,1},
{1,0,0,0,1},
{1,0,0,0,1},
{1,0,0,0,1},
{1,0,0,0,1}};

unsigned char bn[7][5]={
{1,0,0,0,1},
{1,1,0,0,1},
{1,1,0,0,1},
{1,0,1,0,1},
{1,0,0,1,1},
{1,0,0,1,1},
{1,0,0,0,1}};

unsigned char bo[7][5]={
{0,1,1,1,0},
{1,0,0,0,1},
{1,0,0,0,1},
{1,0,0,0,1},
{1,0,0,0,1},
{1,0,0,0,1},
{0,1,1,1,0}};

unsigned char bp[7][5]={
{1,1,1,1,0},
{1,0,0,0,1},
{1,0,0,0,1},
{1,1,1,1,0},
{1,0,0,0,0},
{1,0,0,0,0},
{1,0,0,0,0}};

unsigned char lq[7][5]={
{0,1,1,0,1},
{1,0,0,1,1},
{1,0,0,1,1},
{0,1,1,0,1},
{0,0,0,0,1},
{0,0,0,0,1},
{0,0,0,0,1}};

unsigned char br[7][5]={
{1,1,1,1,0},
{1,0,0,0,1},
{1,0,0,0,1},
{1,1,1,1,0},
{1,0,1,0,0},
{1,0,0,1,0},
{1,0,0,0,1}};

unsigned char bs[7][5]={
{0,1,1,1,0},
{1,0,0,0,1},
{1,0,0,0,0},
{0,1,1,1,0},
{0,0,0,0,1},
{1,0,0,0,1},
{0,1,1,1,0}};

unsigned char bt[7][5]={
{1,1,1,1,1},
{0,0,1,0,0},
{0,0,1,0,0},
{0,0,1,0,0},
{0,0,1,0,0},
{0,0,1,0,0},
{0,0,1,0,0}};

unsigned char bu[7][5]={
{1,0,0,0,1},
{1,0,0,0,1},
{1,0,0,0,1},
{1,0,0,0,1},
{1,0,0,0,1},
{1,0,0,0,1},
{0,1,1,1,0}};

unsigned char bv[7][5]={
{1,0,0,0,1},
{1,0,0,0,1},
{1,0,0,0,1},
{0,1,0,1,0},
{0,1,0,1,0},
{0,0,1,0,0},
{0,0,1,0,0}};

unsigned char bw[7][5]={
{1,0,0,0,1},
{1,0,0,0,1},
{1,0,0,0,1},
{1,0,1,0,1},
{1,0,1,0,1},
{1,0,1,0,1},
{0,1,0,1,0}};

unsigned char bx[7][5]={
{1,0,0,0,1},
{0,1,0,1,0},
{0,1,0,1,0},
{0,0,1,0,0},
{0,1,0,1,0},
{0,1,0,1,0},
{1,0,0,0,1}};

unsigned char by[7][5]={
{1,0,0,0,1},
{0,1,0,1,0},
{0,0,1,0,0},
{0,0,1,0,0},
{0,0,1,0,0},
{0,0,1,0,0},
{0,0,1,0,0}};


unsigned char bz[7][5]={
{1,1,1,1,1},
{0,0,0,0,1},
{0,0,0,1,0},
{0,0,1,0,0},
{0,1,0,0,0},
{1,0,0,0,0},
{1,1,1,1,1}};

unsigned char num0[7][5]={
{0,1,1,1,0},
{1,0,0,1,1},
{1,0,1,0,1},
{1,0,1,0,1},
{1,0,1,0,1},
{1,1,0,0,1},
{0,1,1,1,0}};

unsigned char num1[7][5]={
{0,0,0,0,1},
{0,0,0,0,1},
{0,0,0,0,1},
{0,0,0,0,1},
{0,0,0,0,1},
{0,0,0,0,1},
{0,0,0,0,1}};

unsigned char num2[7][5]={
{0,1,1,1,0},
{1,0,0,0,1},
{0,0,0,1,0},
{0,0,1,0,0},
{0,1,0,0,0},
{1,0,0,0,0},
{1,1,1,1,1}};

unsigned char num3[7][5]={
{0,1,1,1,0},
{1,0,0,0,1},
{0,0,0,0,1},
{0,1,1,1,0},
{0,0,0,0,1},
{1,0,0,0,1},
{0,1,1,1,0}};

unsigned char num4[7][5]={
{1,0,0,0,1},
{1,0,0,0,1},
{1,0,0,0,1},
{1,1,1,1,1},
{0,0,0,0,1},
{0,0,0,0,1},
{0,0,0,0,1}};

unsigned char num5[7][5]={
{1,1,1,1,1},
{1,0,0,0,0},
{1,0,0,0,0},
{1,1,1,1,0},
{0,0,0,0,1},
{0,0,0,0,1},
{1,1,1,1,0}};

unsigned char num6[7][5]={
{1,1,1,1,1},
{1,0,0,0,0},
{1,0,0,0,0},
{1,1,1,1,1},
{1,0,0,0,1},
{1,0,0,0,1},
{1,1,1,1,1}};

unsigned char num7[7][5]={
{1,1,1,1,1},
{0,0,0,0,1},
{0,0,0,0,1},
{0,0,0,0,1},
{0,0,0,0,1},
{0,0,0,0,1},
{0,0,0,0,1}};

unsigned char num8[7][5]={
{0,1,1,1,0},
{1,0,0,0,1},
{1,0,0,0,1},
{0,1,1,1,0},
{1,0,0,0,1},
{1,0,0,0,1},
{0,1,1,1,0}};

unsigned char num9[7][5]={
{0,1,1,1,0},
{1,0,0,0,1},
{1,0,0,0,1},
{0,1,1,1,0},
{0,0,0,0,1},
{0,0,0,0,1},
{0,1,1,1,0}};

unsigned char underLine[7][5]={
{0,0,0,0,0},
{0,0,0,0,0},
{0,0,0,0,0},
{0,0,0,0,0},
{0,0,0,0,0},
{0,0,0,0,0},
{1,1,1,1,1}};

unsigned char minus[7][5] ={
{0,0,0,0,0},
{0,0,0,0,0},
{0,0,0,0,0},
{0,1,1,1,0},
{0,0,0,0,0},
{0,0,0,0,0},
{0,0,0,0,0}};

unsigned char plus[7][5]={
{0,0,0,0,0},
{0,0,0,0,0},
{0,0,1,0,0},
{0,1,1,1,0},
{0,0,1,0,0},
{0,0,0,0,0},
{0,0,0,0,0}};

unsigned char equal[7][5]={
{0,0,0,0,0},
{0,0,0,0,0},
{1,1,1,1,1},
{0,0,0,0,0},
{1,1,1,1,1},
{0,0,0,0,0},
{0,0,0,0,0}};


unsigned char leftBracket[7][5]={
{0,0,0,0,1},
{0,0,0,1,0},
{0,0,1,0,0},
{0,0,1,0,0},
{0,0,1,0,0},
{0,0,0,1,0},
{0,0,0,0,1}};

unsigned char rightBracket[7][5]={
{1,0,0,0,0},
{0,1,0,0,0},
{0,0,1,0,0},
{0,0,1,0,0},
{0,0,1,0,0},
{0,1,0,0,0},
{1,0,0,0,0}};

unsigned char exclamationMark[7][5]={
{0,0,1,0,0},
{0,0,1,0,0},
{0,0,1,0,0},
{0,0,1,0,0},
{0,0,1,0,0},
{0,0,0,0,0},
{0,0,1,0,0}};

unsigned char questionMark[7][5]={
{0,0,1,0,0},
{0,1,0,1,0},
{0,0,0,1,0},
{0,0,1,0,0},
{0,0,1,0,0},
{0,0,0,0,0},
{0,0,1,0,0}};

unsigned char dot[7][5]={
{0,0,0,0,0},
{0,0,0,0,0},
{0,0,0,0,0},
{0,0,0,0,0},
{0,1,1,0,0},
{0,1,1,0,0},
{0,0,0,0,0}};

unsigned char comma[7][5]={
{0,0,0,0,0},
{0,0,0,0,0},
{0,0,0,0,0},
{0,0,0,0,0},
{0,1,1,0,0},
{0,1,1,0,0},
{0,0,1,0,0}};

unsigned char semicolon[7][5]={
{0,1,1,0,0},
{0,1,1,0,0},
{0,0,0,0,0},
{0,0,0,0,0},
{0,1,1,0,0},
{0,1,1,0,0},
{0,0,1,0,0}};

unsigned char colon[7][5]={
{0,1,1,0,0},
{0,1,1,0,0},
{0,0,0,0,0},
{0,0,0,0,0},
{0,1,1,0,0},
{0,1,1,0,0},
{0,0,0,0,0}};

unsigned char spc[7][5]={
{0,0,0,0,0},
{0,0,0,0,0},
{0,0,0,0,0},
{0,0,0,0,0},
{0,0,0,0,0},
{0,0,0,0,0},
{0,0,0,0,0}};

unsigned char gvoid[7][5]={
{1,0,1,0,1},
{0,1,0,1,0},
{1,0,1,0,1},
{0,1,0,1,0},
{1,0,1,0,1},
{0,1,0,1,0},
{1,0,1,0,1}};

struct symbol{
unsigned char printable;
unsigned char glyph[7][5];
};

struct symbol unprintable;
struct symbol space;
struct symbol asciitable[127];

void initascii(){
unprintable.printable=0;
**unprintable.glyph=**gvoid;
space.printable=1;
**space.glyph=**spc;
asciitable[0]=unprintable;
asciitable[1]=unprintable;
asciitable[2]=unprintable;
asciitable[3]=unprintable;
asciitable[4]=unprintable;
asciitable[5]=unprintable;
asciitable[6]=unprintable;
asciitable[7]=unprintable;
asciitable[8]=unprintable;
asciitable[9]=unprintable;
asciitable[10]=unprintable;
asciitable[11]=unprintable;
asciitable[12]=unprintable;
asciitable[13]=unprintable;
asciitable[14]=unprintable;
asciitable[15]=unprintable;
asciitable[16]=unprintable;
asciitable[17]=unprintable;
asciitable[18]=unprintable;
asciitable[19]=unprintable;
asciitable[20]=unprintable;
asciitable[21]=unprintable;
asciitable[22]=unprintable;
asciitable[23]=unprintable;
asciitable[24]=unprintable;
asciitable[25]=unprintable;
asciitable[26]=unprintable;
asciitable[27]=unprintable;
asciitable[28]=unprintable;
asciitable[29]=unprintable;
asciitable[30]=unprintable;
asciitable[31]=unprintable;
asciitable[32]=space;
asciitable[33].printable=1;
**asciitable[33].glyph=**exclamationMark;
asciitable[34].printable=1;
**asciitable[34].glyph=**gvoid;
asciitable[35].printable=1;
**asciitable[35].glyph=**gvoid;
asciitable[36].printable=1;
**asciitable[36].glyph=**gvoid;
asciitable[37].printable=1;
**asciitable[37].glyph=**gvoid;
asciitable[38].printable=1;
**asciitable[38].glyph=**gvoid;
asciitable[39].printable=1;
**asciitable[39].glyph=**gvoid;
asciitable[40].printable=1;
**asciitable[40].glyph=**leftBracket;
asciitable[41].printable=1;
**asciitable[41].glyph=**rightBracket;
asciitable[42].printable=1;
**asciitable[42].glyph=**gvoid;
asciitable[43].printable=1;
**asciitable[43].glyph=**plus;
asciitable[44].printable=1;
**asciitable[44].glyph=**comma;
asciitable[45].printable=1;
**asciitable[45].glyph=**minus;
asciitable[46].printable=1;
**asciitable[46].glyph=**dot;
asciitable[47].printable=1;
**asciitable[47].glyph=**gvoid;
asciitable[48].printable=1;
**asciitable[48].glyph=**num0;
asciitable[49].printable=1;
**asciitable[49].glyph=**num1;
asciitable[50].printable=1;
**asciitable[50].glyph=**num2;
asciitable[51].printable=1;
**asciitable[51].glyph=**num3;
asciitable[52].printable=1;
**asciitable[52].glyph=**num4;
asciitable[53].printable=1;
**asciitable[53].glyph=**num5;
asciitable[54].printable=1;
**asciitable[54].glyph=**num6;
asciitable[55].printable=1;
**asciitable[55].glyph=**num7;
asciitable[56].printable=1;
**asciitable[56].glyph=**num8;
asciitable[57].printable=1;
**asciitable[57].glyph=**num9;
asciitable[58].printable=1;
**asciitable[58].glyph=**colon;
asciitable[59].printable=1;
**asciitable[59].glyph=**semicolon;
asciitable[60].printable=1;
**asciitable[60].glyph=**gvoid;
asciitable[61].printable=1;
**asciitable[61].glyph=**equal;
asciitable[62].printable=1;
**asciitable[62].glyph=**gvoid;
asciitable[63].printable=1;
**asciitable[63].glyph=**questionMark;
asciitable[64].printable=1;
**asciitable[64].glyph=**gvoid;
asciitable[65].printable=1;
**asciitable[65].glyph=**ba;
asciitable[66].printable=1;
**asciitable[66].glyph=**bb;
asciitable[67].printable=1;
**asciitable[67].glyph=**bc;
asciitable[68].printable=1;
**asciitable[68].glyph=**bd;
asciitable[69].printable=1;
**asciitable[69].glyph=**be;
asciitable[70].printable=1;
**asciitable[70].glyph=**bf;
asciitable[71].printable=1;
**asciitable[71].glyph=**bg;
asciitable[72].printable=1;
**asciitable[72].glyph=**bh;
asciitable[73].printable=1;
**asciitable[73].glyph=**li;
asciitable[74].printable=1;
**asciitable[74].glyph=**lj;
asciitable[75].printable=1;
**asciitable[75].glyph=**bk;
asciitable[76].printable=1;
**asciitable[76].glyph=**bl;
asciitable[77].printable=1;
**asciitable[77].glyph=**bm;
asciitable[78].printable=1;
**asciitable[78].glyph=**bn;
asciitable[79].printable=1;
**asciitable[79].glyph=**bo;
asciitable[80].printable=1;
**asciitable[80].glyph=**bp;
asciitable[81].printable=1;
**asciitable[81].glyph=**lq;
asciitable[82].printable=1;
**asciitable[82].glyph=**br;
asciitable[83].printable=1;
**asciitable[83].glyph=**bs;
asciitable[84].printable=1;
**asciitable[84].glyph=**bt;
asciitable[85].printable=1;
**asciitable[85].glyph=**bu;
asciitable[86].printable=1;
**asciitable[86].glyph=**bv;
asciitable[87].printable=1;
**asciitable[87].glyph=**bw;
asciitable[88].printable=1;
**asciitable[88].glyph=**bx;
asciitable[89].printable=1;
**asciitable[89].glyph=**by;
asciitable[90].printable=1;
**asciitable[90].glyph=**bz;
asciitable[91].printable=1;
**asciitable[91].glyph=**gvoid;
asciitable[92].printable=1;
**asciitable[92].glyph=**gvoid;
asciitable[93].printable=1;
**asciitable[93].glyph=**gvoid;
asciitable[94].printable=1;
**asciitable[94].glyph=**gvoid;
asciitable[95].printable=1;
**asciitable[95].glyph=**underLine;
asciitable[96].printable=1;
**asciitable[96].glyph=**gvoid;
asciitable[97].printable=1;
**asciitable[97].glyph=**ba;
asciitable[98].printable=1;
**asciitable[98].glyph=**bb;
asciitable[99].printable=1;
**asciitable[99].glyph=**bc;
asciitable[100].printable=1;
**asciitable[100].glyph=**bd;
asciitable[101].printable=1;
**asciitable[101].glyph=**be;
asciitable[102].printable=1;
**asciitable[102].glyph=**bf;
asciitable[103].printable=1;
**asciitable[103].glyph=**bg;
asciitable[104].printable=1;
**asciitable[104].glyph=**bh;
asciitable[105].printable=1;
**asciitable[105].glyph=**li;
asciitable[106].printable=1;
**asciitable[106].glyph=**lj;
asciitable[107].printable=1;
**asciitable[107].glyph=**bk;
asciitable[108].printable=1;
**asciitable[108].glyph=**bl;
asciitable[109].printable=1;
**asciitable[109].glyph=**bm;
asciitable[110].printable=1;
**asciitable[110].glyph=**bn;
asciitable[111].printable=1;
**asciitable[111].glyph=**bo;
asciitable[112].printable=1;
**asciitable[112].glyph=**bp;
asciitable[113].printable=1;
**asciitable[113].glyph=**lq;
asciitable[114].printable=1;
**asciitable[114].glyph=**br;
asciitable[115].printable=1;
**asciitable[115].glyph=**bs;
asciitable[116].printable=1;
**asciitable[116].glyph=**bt;
asciitable[117].printable=1;
**asciitable[117].glyph=**bu;
asciitable[118].printable=1;
**asciitable[118].glyph=**bv;
asciitable[119].printable=1;
**asciitable[119].glyph=**bw;
asciitable[120].printable=1;
**asciitable[120].glyph=**bx;
asciitable[121].printable=1;
**asciitable[121].glyph=**by;
asciitable[122].printable=1;
**asciitable[122].glyph=**bz;
asciitable[123].printable=1;
**asciitable[123].glyph=**gvoid;
asciitable[124].printable=1;
**asciitable[124].glyph=**gvoid;
asciitable[125].printable=1;
**asciitable[125].glyph=**gvoid;
asciitable[126].printable=1;
**asciitable[126].glyph=**gvoid;
asciitable[127]=unprintable;
}

int main(int argc, char const *argv[])
{
	initascii();
	FILE *fp;
	fp = fopen("font.tf","w");
	for(int cnt=0; cnt<128; cnt++){
		fwrite(&asciitable[cnt].printable,1,1,fp);
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&asciitable[cnt].glyph[i][j],1,1,fp);
			}
		}	
	}
	return 0;
}