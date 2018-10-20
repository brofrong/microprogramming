#ifndef STDIO_CPP
#define STDIO_CPP

#include "video.cpp"
#include "CMOS.h"
#include "keyboard.cpp"

class out
{
public:

	video screen = video();
	keyboard key = keyboard();

	out(){
		this->dataAddres=*(char**) (0x8004);
	}

	int column=58,line=0,multiply=1,padding=3;
	int startLine = 0;

	void color(int a){
		screen.color=a;
	}

	void printChar(char letter){
		if (letter>='a'&&letter<='w'){
			letter-=0x20;
		}
		int currpos=36*(int)letter;
		if (*(this->dataAddres+currpos)){//if printable

			if (this->multiply<=1){
				for (int i=0;i<7;i++){
					for (int j=0;j<5;j++){
						if (*(this->dataAddres+i*5+j+currpos+1)){
							screen.setPixel(this->line+j,this->column+i);
						}
					}
				}
				this->line+=5+this->padding;
			} else{
				for (int i=0;i<7;i++){
					for (int j=0;j<5;j++){
						if (*(this->dataAddres+i*5+j+currpos+1)){
							screen.drawSquare(this->line+j*this->multiply,this->column+i*this->multiply,this->line+j*this->multiply+this->multiply,this->column+i*this->multiply+this->multiply);
						}
					}
				}
				this->line+=5*this->multiply+this->padding;
			}

		}
	}

	void printString(char *message){
		int i=0;
		while (message[i]){ 
			if (message[i]=='\n'){ //перенос строки
				this->NL();
				i++;
				continue;
			} else{
				if ((this->line + (5*this->multiply) + this->padding)>1024){
					this->NL();
				}
				this->printChar(message[i]);
				i++;
			}
		}
	}

	void NL(){
		this->line=this->startLine;
		this->column+=this->padding+(this->multiply*7);
	}

	void printInt(int var){
		unsigned int mask=1000000000,flag=0;
		char number;
		
		if(var==0){
			printChar('0');
			return;
		}

		while (mask){
			number =(char) ((var / mask)%10 )+ 0x30;
			
			mask=mask/10;
			if (flag){
				printChar(number);
			}
			else{
				if(number!=0x30){
					flag=1;
					printChar(number);
				}
			}
			
		}
	}
	void printIntH(int var){
		unsigned int mask=0x10000000,flag=0;
		char number;
		while (mask){
			number =(char) ((var / mask)%0x10 );
			
			if(number<9){
				number+= 0x30;
			} else{
				number+= 0x37;
			}

			mask=mask/0x10;
			if (flag){
				printChar(number);
			}
			else{
				if(number!=0x30){
					flag=1;
					printChar(number);
				}
			}
		}
	}

	


	void drawPointer(){
		if(pointerDelay>30){
			pointerDelay=0;
			if(pointerFlag ){
				pointerFlag=0;
				screen.color=0xaaaaaa;
				screen.drawSquare(line+this->multiply,column+this->multiply,line+(4*this->multiply),column+(6*this->multiply));
			}else{
				pointerFlag=1;
				screen.color=0x000000;
				screen.drawSquare(line+this->multiply,column+this->multiply,line+(4*this->multiply),column+(6*this->multiply));
			}	
		}
		pointerDelay++;
	
	}

	void input(){
		ascii = key.pull();
		if(ascii){
			oldAscii=ascii;
			if(ascii=='\n'){
				NL();
			} else if(ascii=='\b'){
				if(line>0){
					this->line-=5*this->multiply+this->padding;
					screen.color=0x000000;
					screen.drawSquare(line,column,line+(5*this->multiply),column+(7*this->multiply));
				}else {
					//перенос на строчку назад, но где она кончилась?
					this->line=1024;
					this->column-=this->padding+(this->multiply*7);
				}
			}else{
				if ((this->line + (5*this->multiply) + this->padding)>1024){
					NL();
				} 
				screen.color=0xffffff;
				printChar(ascii);
			}
		}
	}

	void inputTest(){
		Key=key.getKey();
		if(Key!=oldKey){
			oldKey=Key;
			ascii = key.pull();
			if(ascii=='\n'){
				NL();
			} else if(ascii=='\b'){
				this->line-=5*this->multiply+this->padding;
				screen.color=0x000000;
				screen.drawSquare(line,column,line+(5*this->multiply),column+(7*this->multiply));
			}else{
				if ((this->line + (5*this->multiply) + this->padding)>1024){
					NL();
				} 
				screen.color=0x000000;
				screen.drawSquare(line,column,line+(5*this->multiply),column+(7*this->multiply));
				screen.color=0xffffff;
				printChar(ascii);
				printString(": ");
				printInt((int)key.getKey());
				NL();
			}
		}
	}


private:
	char* dataAddres;
	unsigned char second=99,oldsecond,oldKey,Key;
	int pointerFlag=0;
	int pointerDelay;
	char oldAscii,ascii;

};


#endif