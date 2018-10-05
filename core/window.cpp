#ifndef WINDOW_CPP
#define WINDOW_CPP

#include "CMOS.h"
#include "video.cpp"
#include "stdio.cpp"
class window
{
public:
	video screen = video();
	out io = out();
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
		
		io.column=10;
		io.multiply=3;
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
		this->drawFPS();
		
	}


	int FPSLimiter(int fps){
		if(countFrames>delay){
			countFrames=0;
			return (1);
		}
		countFrames++;
		counter++;
		secondF = getSeconds();
		if(secondF!=secondFOld){
			secondFOld=secondF;
			delay=(counter/fps);
			counter=0;
		}
		return (0);
	}

private:

	unsigned char second,oldSecond=0,minute,oldMinute=0,hour,oldHour;
	int i;

	int counter,delay=9999999,countFrames;
	unsigned char secondF,secondFOld;

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
			io.color(0xffffff);
			io.line=1000;
			io.printChar(ed);
			io.line=980;
			io.printChar(dec);
		}

		if (this->minute != this->oldMinute){
			this->oldMinute = this->minute;
			ed = minute%0x10 + 0x30;
			dec = minute/0x10 + 0x30;
			screen.color =0x000000;
			screen.drawSquare(930,0,970,47);
			io.line=950;
			io.printChar(ed);
			io.line=930;
			io.printChar(dec);
		}

		if (this->hour != this->oldHour){
			this->oldHour = this->hour;
			ed = hour%0x10+3;
			if(ed>9){
				ed-=10;
				hour+=0x10;
			}
			ed +=0x30;
			dec = hour/0x10 + 0x30;

			screen.color =0x000000;
			screen.drawSquare(880,0,920,47);
			io.line=900;
			io.printChar(ed);
			io.line=880;
			io.printChar(dec);
		}
	}

	int count=0,FPS;
	unsigned char secondFPS,oldSecondFPS;

	void drawFPS(){
		secondFPS=getSeconds();
		if(secondFPS!=oldSecondFPS){
			oldSecondFPS=secondFPS;
			io.line=100;
			screen.color=0x000000;
			screen.drawSquare(100,0,400,47);
			io.printInt(count);
			count=0;
		}
		count++;
	}

};

#endif