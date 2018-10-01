//#include "CMOS.cpp"
#include "video.cpp"
class window
{
public:
	video screen = video();
	//1024*768*24bit

	window(){
	};

	void draw(){
		this->drawTop();
		//this->drowProgram();
	}

private:

	char *str;
	

	void drawTop(){
		//48 pixels height
		screen.color = 0xffffff;
		screen.drawLine(0,48,1024,48);
	}

};