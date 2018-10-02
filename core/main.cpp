
//#include "video.cpp"
//#include "keyboard.cpp"
#include "CMOS.h"
#include "window.cpp"
#include "stdio.cpp"
int _start(){
	video screen = video();
	window win = window();
	out io = out();
	//screen.drawSquare(100,100,200,200);
	int i;
	while(1){
		if (win.FPSLimiter(60)){
			win.draw();
			io.drawPointer();
			io.inputTest();
			
			if (i>200){
				i=0;
			}
			screen.color=0x00ff00;
			screen.drawSquare(i,300,200,400);
			screen.color=0x000000;
			screen.drawSquare(0,300,i,400);
			i++;
			}
	}
	while(1);
}