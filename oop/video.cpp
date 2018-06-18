class video
{
public:
	char* videoAddr;
	char* dataAddres;
	video(){
		this->videoAddr=*(char**) (0x8000);
		this->dataAddres=*(char**) (0x8004);
	};

	void setPixel(int x,int y,int color){
		char *p;
		p=this->videoAddr;
		p+=((y*1024)+x)*3;
		*(int*)p=color;
	}
	
	
	void drawSquare(int x0,int y0,int x1,int y1,int color){ //ресует квадрат
		for (int y=y0;y<y1;y++){
			for (int x=x0;x<x1;x++){
				setPixel(x,y,color);
			}
		}
	}
	
	void drawChar(int x,int y,int color,int multiplier, char letter){
		if (letter>='a'&&letter<='w'){
			letter-=0x20;
		}
		int currpos=36*(int)letter;
		if (*(this->dataAddres+currpos)){//if printable
			if (multiplier<=1){
				for (int i=0;i<7;i++){
					for (int j=0;j<5;j++){
						if (*(this->dataAddres+i*5+j+currpos+1)){
							setPixel(x+j,y+i,color);
						}
					}
				}
			} else{
				for (int i=0;i<7;i++){
					for (int j=0;j<5;j++){
						if (*(this->dataAddres+i*5+j+currpos+1)){
							drawSquare(x+j*multiplier,y+i*multiplier,x+j*multiplier+multiplier,y+i*multiplier+multiplier,color);
						}
					}
				}
			}
		}
	}
	
	void drawString(char *message,int x,int y,int color,int multiplier,int offset){
		int i=0;
		int startx=x;
		while (message[i]){ 
			if (message[i]=='\n'){ //перенос строки
				x=startx;
				y+=offset+(multiplier*7);
				i++;
				continue;
			}
			if ((x + (5*multiplier) + offset)>1024){
				x=startx;
				y+=offset+(multiplier*7);
			}
			drawChar(x,y,color,multiplier,message[i]);
			x += (5*multiplier) + offset; //позиция для следующей буквы
			i++;
		}
	}
};