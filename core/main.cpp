
//#include "video.cpp"
//#include "keyboard.cpp"
#include "CMOS.h"
#include "window.cpp"
#include "stdio.cpp"
//#include "pong.cpp"
#include "disc.cpp"
#include "imgView.cpp"

int _start(){
	//video screen = video();
	window win = window();
	out io = out();
	//pong = pongGame();
	imgView prog = imgView();
	io.multiply=5;

	while(1){
		if (win.FPSLimiter(60)){
			win.draw();
			prog.update();
			//pong.draw();
			//io.drawPointer();
			//io.input();
		}
	}
	while(1);
}