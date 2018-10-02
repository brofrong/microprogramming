#include <stdio.h>
#include <iterator>

struct symbol{
unsigned char printable;
unsigned char glyph[7][5];
};


struct symbol asciitable[127];

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
{1,1,1,1,1},
{1,1,1,1,1},
{1,0,1,0,1},
{1,1,0,1,1},
{1,0,1,0,1},
{1,1,1,1,1},
{1,1,1,1,1}};

struct symbol unprintable;
struct symbol space;

void initascii(){
unprintable.printable=0;
std::copy(&gvoid[0][0], &gvoid[7][5], &unprintable.glyph[0][0]);
space.printable=1;
std::copy(&spc[0][0], &spc[7][5], &space.glyph[0][0]);
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
std::copy(&exclamationMark[0][0], &exclamationMark[7][5], &asciitable[33].glyph[0][0]);
asciitable[34].printable=1;
std::copy(&gvoid[0][0], &gvoid[7][5], &asciitable[34].glyph[0][0]);
asciitable[35].printable=1;
std::copy(&gvoid[0][0], &gvoid[7][5], &asciitable[35].glyph[0][0]);
asciitable[36].printable=1;
std::copy(&gvoid[0][0], &gvoid[7][5], &asciitable[36].glyph[0][0]);
asciitable[37].printable=1;
std::copy(&gvoid[0][0], &gvoid[7][5], &asciitable[37].glyph[0][0]);
asciitable[38].printable=1;
std::copy(&gvoid[0][0], &gvoid[7][5], &asciitable[38].glyph[0][0]);
asciitable[39].printable=1;
std::copy(&gvoid[0][0], &gvoid[7][5], &asciitable[39].glyph[0][0]);
asciitable[40].printable=1;
std::copy(&leftBracket[0][0], &leftBracket[7][5], &asciitable[40].glyph[0][0]);
asciitable[41].printable=1;
std::copy(&rightBracket[0][0], &rightBracket[7][5], &asciitable[41].glyph[0][0]);
asciitable[42].printable=1;
std::copy(&gvoid[0][0], &gvoid[7][5], &asciitable[42].glyph[0][0]);
asciitable[43].printable=1;
std::copy(&plus[0][0], &plus[7][5], &asciitable[43].glyph[0][0]);
asciitable[44].printable=1;
std::copy(&comma[0][0], &comma[7][5], &asciitable[44].glyph[0][0]);
asciitable[45].printable=1;
std::copy(&minus[0][0], &minus[7][5], &asciitable[45].glyph[0][0]);
asciitable[46].printable=1;
std::copy(&dot[0][0], &dot[7][5], &asciitable[46].glyph[0][0]);
asciitable[47].printable=1;
std::copy(&gvoid[0][0], &gvoid[7][5], &asciitable[47].glyph[0][0]);
asciitable[48].printable=1;
std::copy(&num0[0][0], &num0[7][5], &asciitable[48].glyph[0][0]);
asciitable[49].printable=1;
std::copy(&num1[0][0], &num1[7][5], &asciitable[49].glyph[0][0]);
asciitable[50].printable=1;
std::copy(&num2[0][0], &num2[7][5], &asciitable[50].glyph[0][0]);
asciitable[51].printable=1;
std::copy(&num3[0][0], &num3[7][5], &asciitable[51].glyph[0][0]);
asciitable[52].printable=1;
std::copy(&num4[0][0], &num4[7][5], &asciitable[52].glyph[0][0]);
asciitable[53].printable=1;
std::copy(&num5[0][0], &num5[7][5], &asciitable[53].glyph[0][0]);
asciitable[54].printable=1;
std::copy(&num6[0][0], &num6[7][5], &asciitable[54].glyph[0][0]);
asciitable[55].printable=1;
std::copy(&num7[0][0], &num7[7][5], &asciitable[55].glyph[0][0]);
asciitable[56].printable=1;
std::copy(&num8[0][0], &num8[7][5], &asciitable[56].glyph[0][0]);
asciitable[57].printable=1;
std::copy(&num9[0][0], &num9[7][5], &asciitable[57].glyph[0][0]);
asciitable[58].printable=1;
std::copy(&colon[0][0], &colon[7][5], &asciitable[58].glyph[0][0]);
asciitable[59].printable=1;
std::copy(&semicolon[0][0], &semicolon[7][5], &asciitable[59].glyph[0][0]);
asciitable[60].printable=1;
std::copy(&gvoid[0][0], &gvoid[7][5], &asciitable[60].glyph[0][0]);
asciitable[61].printable=1;
std::copy(&equal[0][0], &equal[7][5], &asciitable[61].glyph[0][0]);
asciitable[62].printable=1;
std::copy(&gvoid[0][0], &gvoid[7][5], &asciitable[62].glyph[0][0]);
asciitable[63].printable=1;
std::copy(&questionMark[0][0], &questionMark[7][5], &asciitable[63].glyph[0][0]);
asciitable[64].printable=1;
std::copy(&gvoid[0][0], &gvoid[7][5], &asciitable[64].glyph[0][0]);
asciitable[65].printable=1;
std::copy(&ba[0][0], &ba[7][5], &asciitable[65].glyph[0][0]);
asciitable[66].printable=1;
std::copy(&bb[0][0], &bb[7][5], &asciitable[66].glyph[0][0]);
asciitable[67].printable=1;
std::copy(&bc[0][0], &bc[7][5], &asciitable[67].glyph[0][0]);
asciitable[68].printable=1;
std::copy(&bd[0][0], &bd[7][5], &asciitable[68].glyph[0][0]);
asciitable[69].printable=1;
std::copy(&be[0][0], &be[7][5], &asciitable[69].glyph[0][0]);
asciitable[70].printable=1;
std::copy(&bf[0][0], &bf[7][5], &asciitable[70].glyph[0][0]);
asciitable[71].printable=1;
std::copy(&bg[0][0], &bg[7][5], &asciitable[71].glyph[0][0]);
asciitable[72].printable=1;
std::copy(&bh[0][0], &bh[7][5], &asciitable[72].glyph[0][0]);
asciitable[73].printable=1;
std::copy(&li[0][0], &li[7][5], &asciitable[73].glyph[0][0]);
asciitable[74].printable=1;
std::copy(&lj[0][0], &lj[7][5], &asciitable[74].glyph[0][0]);
asciitable[75].printable=1;
std::copy(&bk[0][0], &bk[7][5], &asciitable[75].glyph[0][0]);
asciitable[76].printable=1;
std::copy(&bl[0][0], &bl[7][5], &asciitable[76].glyph[0][0]);
asciitable[77].printable=1;
std::copy(&bm[0][0], &bm[7][5], &asciitable[77].glyph[0][0]);
asciitable[78].printable=1;
std::copy(&bn[0][0], &bn[7][5], &asciitable[78].glyph[0][0]);
asciitable[79].printable=1;
std::copy(&bo[0][0], &bo[7][5], &asciitable[79].glyph[0][0]);
asciitable[80].printable=1;
std::copy(&bp[0][0], &bp[7][5], &asciitable[80].glyph[0][0]);
asciitable[81].printable=1;
std::copy(&lq[0][0], &lq[7][5], &asciitable[81].glyph[0][0]);
asciitable[82].printable=1;
std::copy(&br[0][0], &br[7][5], &asciitable[82].glyph[0][0]);
asciitable[83].printable=1;
std::copy(&bs[0][0], &bs[7][5], &asciitable[83].glyph[0][0]);
asciitable[84].printable=1;
std::copy(&bt[0][0], &bt[7][5], &asciitable[84].glyph[0][0]);
asciitable[85].printable=1;
std::copy(&bu[0][0], &bu[7][5], &asciitable[85].glyph[0][0]);
asciitable[86].printable=1;
std::copy(&bv[0][0], &bv[7][5], &asciitable[86].glyph[0][0]);
asciitable[87].printable=1;
std::copy(&bw[0][0], &bw[7][5], &asciitable[87].glyph[0][0]);
asciitable[88].printable=1;
std::copy(&bx[0][0], &bx[7][5], &asciitable[88].glyph[0][0]);
asciitable[89].printable=1;
std::copy(&by[0][0], &by[7][5], &asciitable[89].glyph[0][0]);
asciitable[90].printable=1;
std::copy(&bz[0][0], &bz[7][5], &asciitable[90].glyph[0][0]);
asciitable[91].printable=1;
std::copy(&gvoid[0][0], &gvoid[7][5], &asciitable[91].glyph[0][0]);
asciitable[92].printable=1;
std::copy(&gvoid[0][0], &gvoid[7][5], &asciitable[92].glyph[0][0]);
asciitable[93].printable=1;
std::copy(&gvoid[0][0], &gvoid[7][5], &asciitable[93].glyph[0][0]);
asciitable[94].printable=1;
std::copy(&gvoid[0][0], &gvoid[7][5], &asciitable[94].glyph[0][0]);
asciitable[95].printable=1;
std::copy(&underLine[0][0], &underLine[7][5], &asciitable[95].glyph[0][0]);
asciitable[96].printable=1;
std::copy(&gvoid[0][0], &gvoid[7][5], &asciitable[96].glyph[0][0]);
asciitable[97].printable=1;
std::copy(&ba[0][0], &ba[7][5], &asciitable[97].glyph[0][0]);
asciitable[98].printable=1;
std::copy(&bb[0][0], &bb[7][5], &asciitable[98].glyph[0][0]);
asciitable[99].printable=1;
std::copy(&bc[0][0], &bc[7][5], &asciitable[99].glyph[0][0]);
asciitable[100].printable=1;
std::copy(&bd[0][0], &bd[7][5], &asciitable[100].glyph[0][0]);
asciitable[101].printable=1;
std::copy(&be[0][0], &be[7][5], &asciitable[101].glyph[0][0]);
asciitable[102].printable=1;
std::copy(&bf[0][0], &bf[7][5], &asciitable[102].glyph[0][0]);
asciitable[103].printable=1;
std::copy(&bg[0][0], &bg[7][5], &asciitable[103].glyph[0][0]);
asciitable[104].printable=1;
std::copy(&bh[0][0], &bh[7][5], &asciitable[104].glyph[0][0]);
asciitable[105].printable=1;
std::copy(&li[0][0], &li[7][5], &asciitable[105].glyph[0][0]);
asciitable[106].printable=1;
std::copy(&lj[0][0], &lj[7][5], &asciitable[106].glyph[0][0]);
asciitable[107].printable=1;
std::copy(&bk[0][0], &bk[7][5], &asciitable[107].glyph[0][0]);
asciitable[108].printable=1;
std::copy(&bl[0][0], &bl[7][5], &asciitable[108].glyph[0][0]);
asciitable[109].printable=1;
std::copy(&bm[0][0], &bm[7][5], &asciitable[109].glyph[0][0]);
asciitable[110].printable=1;
std::copy(&bn[0][0], &bn[7][5], &asciitable[110].glyph[0][0]);
asciitable[111].printable=1;
std::copy(&bo[0][0], &bo[7][5], &asciitable[111].glyph[0][0]);
asciitable[112].printable=1;
std::copy(&bp[0][0], &bp[7][5], &asciitable[112].glyph[0][0]);
asciitable[113].printable=1;
std::copy(&lq[0][0], &lq[7][5], &asciitable[113].glyph[0][0]);
asciitable[114].printable=1;
std::copy(&br[0][0], &br[7][5], &asciitable[114].glyph[0][0]);
asciitable[115].printable=1;
std::copy(&bs[0][0], &bs[7][5], &asciitable[115].glyph[0][0]);
asciitable[116].printable=1;
std::copy(&bt[0][0], &bt[7][5], &asciitable[116].glyph[0][0]);
asciitable[117].printable=1;
std::copy(&bu[0][0], &bu[7][5], &asciitable[117].glyph[0][0]);
asciitable[118].printable=1;
std::copy(&bv[0][0], &bv[7][5], &asciitable[118].glyph[0][0]);
asciitable[119].printable=1;
std::copy(&bw[0][0], &bw[7][5], &asciitable[119].glyph[0][0]);
asciitable[120].printable=1;
std::copy(&bx[0][0], &bx[7][5], &asciitable[120].glyph[0][0]);
asciitable[121].printable=1;
std::copy(&by[0][0], &by[7][5], &asciitable[121].glyph[0][0]);
asciitable[122].printable=1;
std::copy(&bz[0][0], &bz[7][5], &asciitable[122].glyph[0][0]);
asciitable[123].printable=1;
std::copy(&gvoid[0][0], &gvoid[7][5], &asciitable[123].glyph[0][0]);
asciitable[124].printable=1;
std::copy(&gvoid[0][0], &gvoid[7][5], &asciitable[124].glyph[0][0]);
asciitable[125].printable=1;
std::copy(&gvoid[0][0], &gvoid[7][5], &asciitable[125].glyph[0][0]);
asciitable[126].printable=1;
std::copy(&gvoid[0][0], &gvoid[7][5], &asciitable[126].glyph[0][0]);
asciitable[127]=unprintable;
}

int main(int argc, char const *argv[])
{
	initascii();
	FILE *fp;
	fp = fopen("font.tf","w");
	for(int cnt=0; cnt<128; cnt++){
		fwrite(&asciitable[cnt].printable,1,1,fp);
		printf("%i\n", asciitable[cnt].printable);
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				fwrite(&asciitable[cnt].glyph[i][j],1,1,fp);
				printf("%i", asciitable[cnt].glyph[i][j]);
			}
			printf("\n");
		}	
	}
	return 0;
}