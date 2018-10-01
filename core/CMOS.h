#ifndef CMOS_H
#define CMOS_H
unsigned char getCMOS(unsigned char data);
unsigned char getSeconds();
int bcd_to_number(unsigned char val);
void binify(char* str, unsigned char ch);

#endif