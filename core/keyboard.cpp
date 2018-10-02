#ifndef KEYBOARD_CPP
#define KEYBOARD_CPP

class keyboard
{
public:
	char translist[219] = {0,27,'1','2','3','4','5','6','7','8','9','0','-','=','\b','\t','q','w','e','r','t','y','u','i','o','p','[',']','\n',0,'a','s','d','f','g','h','j','k','l',';','\'','`',0,8,'z','x','c','v','b','n','m',',','.','/',0,'*',0,' ',0,0,0,0,0,0,0,0,0,0,0,0,0,'7','8','9','-','4','5','6','+','1','2','3','0','.',0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,'!','@','#','$','%','^','&','*','(',')','_','+','\b','\t','Q','W','E','R','T','Y','U','I','O','P','{','}','\n',0,'A','S','D','F','G','H','J','K','L',':','"','~',0,8,'Z','X','C','V','B','N','M','<','>','?',0,'*',0,' ',0,0,0,0,0,0,0,0,0,0,0,0,0,'7','8','9','-','4','5','6','+','1','2','3','0','.',0,0};
	char previous='3';
	char pull() {
		char current = this->getKey();
		if ((this->previous != current) && (current <100)) {
				this->previous=current;
				return this->toascii(current);
			}
		return 0;
	}
	
	char toascii(char scan) {
		return this->translist[scan]; 
	}
	
	char getAscii(){
		return this->toascii(this->getKey());
	}

	char getKey() {
		asm("xor eax,eax");
		asm("in al,0x60");
	}
	
	char keyPressed() {
		asm("xor eax,eax");
		asm("in al,0x61");
	}
	
};

#endif