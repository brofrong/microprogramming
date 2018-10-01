#ifndef STDIO_CPP
#define STDIO_CPP

#include "video.cpp"

class out
{
public:

	video screen = video();
	out(){
		this->dataAddres=*(char**) (0x8004);
	}

	int column,line,multiply=1,padding=3;
	int startLine = 0;



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



private:
	char* dataAddres;
};


#endif