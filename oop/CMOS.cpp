#include "CMOS.hpp"
unsigned char CMOS::getSeconds(){
	asm("xor eax, eax");
	asm("out 0x70, ax");
	asm("in ax, 0x71");
}

/*
unsigned char getSeconds(){
	asm("xor eax, eax");
	asm("out 0x70, ax");
	asm("in ax, 0x71");
}

int bcd_to_number(char val)
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
}*/