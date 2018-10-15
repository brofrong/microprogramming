
//#include "video.cpp"
//#include "keyboard.cpp"
#include "CMOS.h"
#include "window.cpp"
#include "stdio.cpp"
#include "pong.cpp"
#include "disc.cpp"

int _start(){
	//video screen = video();
	window win = window();
	out io = out();
	pong = pongGame();
	hdd drive = hdd();
	//screen.drawSquare(100,100,200,200);
	
	io.multiply=5;

	win.drawBMP(0x28);


	while(1){
		if (win.FPSLimiter(60)){
			win.draw();
			//pong.draw();
			//io.drawPointer();
			//io.input();
		}
	}
	while(1);
}