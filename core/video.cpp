#ifndef VIDEO_CPP
#define VIDEO_CPP

#include "math.h"

class video
{
public:
	int color = 0xffffff;
	video(){
		this->videoAddr=*(char**) (0x8000);
		this->dataAddres=*(char**) (0x8004);
	};

	void setPixel(int x,int y){
		char *p;
		p=this->videoAddr;
		p+=((y*1024)+x)*3;
		*(int*)p=this->color;
	}

	void drawLine(int x0, int y0, int x1, int y1){
		if (abs(y1-y0) <abs(x1-x0)){
			if (x0 > x1){
				this->drawLineLow(x1,y1,x0,y0);
			} else{
				this->drawLineLow(x0,y0,x1,y1);
			}
		}else{
			if (y0 > y1){
				this->drawLineHigh(x1,y1,x0,y0);
			} else {
				this->drawLineHigh(x0,y0,x1,y1);
			}
		}
	}
	/*
	void drawCircle(int R,int x1,int y1){
		int x = 0;
		int y = R;
		int delta = 1-2*R;
		int error =0;
		while (y>=0){
			this->setPixel(x1+x,y1+y);
			this->setPixel(x1+x,y1-y);
			this->setPixel(x1-x,y1+y);
			this->setPixel(x1-x,y1-y);
			error = 2 * (delta + y) -1;
			if((delta<0)&&(error<=0)){
				delta+=2*++x+1;
				continue;
			}
			error = 2*(delta - x) -1;
			if ((delta>0)&&(error>0)){
				delta += 1 -2*--y;
				continue;
			}
			x++;
			delta += 2*(x-y);
			y--;
		}
	}*/
	
	/*void drawCircleFill(int R,int x1,int y1){
		int x = 0;
		int y = R;
		int delta = 1-2*R;
		int error =0;
		while (y>=0){
			this->drawLine(x1+x,y1+y,x1+x,y1-y);
			this->drawLine(x1-x,y1+y,x1-x,y1-y);
			error = 2 * (delta + y) -1;
			if((delta<0)&&(error<=0)){
				delta+=2*++x+1;
				continue;
			}
			error = 2*(delta - x) -1;
			if ((delta>0)&&(error>0)){
				delta += 1 -2*--y;
				continue;
			}
			x++;
			delta += 2*(x-y);
			y--;
		}
	}*/



	void drawSquare(int x0,int y0,int x1,int y1){
		for (int y=y0;y<y1;y++){
			for (int x=x0;x<x1;x++){
				this->setPixel(x,y);
			}
		}
	}

	
	void drawChar(int x,int y,int multiplier, char letter){
		if (letter>='a'&&letter<='w'){
			letter-=0x20;
		}
		int currpos=36*(int)letter;
		if (*(this->dataAddres+currpos)){//if printable
			if (multiplier<=1){
				for (int i=0;i<7;i++){
					for (int j=0;j<5;j++){
						if (*(this->dataAddres+i*5+j+currpos+1)){
							this->setPixel(x+j,y+i);
						}
					}
				}
			} else{
				for (int i=0;i<7;i++){
					for (int j=0;j<5;j++){
						if (*(this->dataAddres+i*5+j+currpos+1)){
							this->drawSquare(x+j*multiplier,y+i*multiplier,x+j*multiplier+multiplier,y+i*multiplier+multiplier);
						}
					}
				}
			}
		}
	}
	
	void drawString(char *message,int x,int y,int multiplier,int offset){
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
			this->drawChar(x,y,multiplier,message[i]);
			x += (5*multiplier) + offset; //позиция для следующей буквы
			i++;
		}
	}


private:
	char* videoAddr;
	char* dataAddres;

	void drawLineLow(int x0,int y0,int x1,int y1){
		int dx = x1-x0;
		int dy = y1-y0;
		int yi = 1;
		if (dy<0){
			yi = -1;
			dy = -dy;
		}
		int D = 2*dy-dx;
		int y = y0;

		for (int x=x0;x<x1;x++){
			setPixel(x,y);
			if (D>0){
				y+=yi;
				D-=2*dx;
			}
			D+=2*dy;
		}
	}

	void drawLineHigh(int x0,int y0,int x1,int y1){
		int dx = x1-x0;
		int dy = y1-y0;
		int xi = 1;
		if (dx<0){
			xi = -1;
			dx = -dx;
		}
		int D = 2*dx -dy;
		int x = x0;

		for (int y = y0;y<y1;y++){
			setPixel(x,y);
			if (D>0){
				x+=xi;
				D-=2*dy;
			}
			D+=2*dx;
		}
		
	}
};

#endif