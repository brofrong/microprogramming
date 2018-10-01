#include "CMOS.h"


unsigned char getCMOS(unsigned char data){
	asm("xor eax,eax");
	asm("mov al, byte ptr[bp + 8]");
	asm("out 0x70,al");
	asm("in al,0x71");
}


unsigned char getSeconds(){
	return getCMOS(0x00);
}

int bcdToNumber(unsigned char val)
{
	return ((val & 0xF0) >> 4) * 10 + (val & 0xF);
}

void binify(char* str, unsigned char ch){
	int i;
	for(i=0; i<8; i++){
		if(ch%2){
			str[i]='1';
		}else{
			str[i]='0';
		}
		ch/=2;
	}	
}
