#ifndef WINDOW_CPP
#define WINDOW_CPP

#include "CMOS.h"
#include "video.cpp"
class window
{
public:
	video screen = video();
	//1024*768*24bit

	window(){
		screen.color = 0xffffff;
		screen.drawLine(0,48,1024,48);
		//minutes - seconds
		screen.drawSquare(970,12,975,17);
		screen.drawSquare(970,25,975,30);
		//houres - minutes
		screen.drawSquare(920,12,925,17);
		screen.drawSquare(920,25,925,30);
	};

	void reDraw(){
		screen.color = 0x000000;
		screen.drawSquare(0,0,1024,48);
		screen.color = 0xffffff;
		screen.drawLine(0,48,1024,48);
		//minutes - seconds
		screen.drawSquare(970,12,975,17);
		screen.drawSquare(970,25,975,30);
		//houres - minutes
		screen.drawSquare(920,12,925,17);
		screen.drawSquare(920,25,925,30);
	}

	void draw(){
		this->drawTime();
		//this->drowProgram();
	}

private:

	unsigned char second,oldSecond=0,minute,oldMinute=0,hour,oldHour;
	int i;


	void drawTime(){
		char dec,ed,buf;
		this->second = getSeconds();
		this->minute = getCMOS(0x02);
		this->hour = getCMOS(0x04);
		screen.color =0xffffff;

		if (this->second != this->oldSecond){
			this->oldSecond = this->second;
			ed = second%0x10 + 0x30;
			dec = second/0x10 + 0x30;
			screen.color =0x000000;
			screen.drawSquare(980,0,1024,47);
			screen.color =0xffffff;
			screen.drawChar(1000,10,3,ed);
			screen.drawChar(980, 10,3,dec);
		}

		if (this->minute != this->oldMinute){
			this->oldMinute = this->minute;
			ed = minute%0x10 + 0x30;
			dec = minute/0x10 + 0x30;
			screen.color =0x000000;
			screen.drawSquare(930,0,970,47);
			screen.color =0xffffff;
			screen.drawChar(950,10,3,ed);
			screen.drawChar(930, 10,3,dec);
		}

		if (this->hour != this->oldHour){
			this->oldHour = this->hour;
			ed = hour%0x10+3;
			if(ed>10){
				ed-=10;
				hour+=0x10;
			}
			ed +=0x30;
			dec = hour/0x10 + 0x30;

			screen.color =0x000000;
			screen.drawSquare(880,0,920,47);
			screen.color =0xffffff;
			screen.drawChar(900,10,3,ed);
			screen.drawChar(880, 10,3,dec);
		}



		
		


	}

};

#endif