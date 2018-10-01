#ifndef VIDEO_H
#define VIDEO_H

#include "math.h"

class video
{
public:
	int color = 0xffffff;
	video();

	void setPixel(int x,int y);
	void drawLine(int x0, int y0, int x1, int y1);
	/*
	void drawCircle(int R,int x1,int y1);
	}*/
	
	/*void drawCircleFill(int R,int x1,int y1);
	}*/



	void drawSquare(int x0,int y0,int x1,int y1);

	
	void drawChar(int x,int y,int multiplier, char letter);
	
	void drawString(char *message,int x,int y,int multiplier,int offset);


private:
	char* videoAddr;
	char* dataAddres;

	void drawLineLow(int x0,int y0,int x1,int y1);

	void drawLineHigh(int x0,int y0,int x1,int y1);
};

#endif