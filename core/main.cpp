
#include "video.cpp"
#include "keyboard.cpp"
#include "CMOS.h"
#include "window.cpp"
#include "stdio.cpp"
//#include "pong.cpp"
#include "disc.cpp"
#include "imgView.cpp"

int _start(){
	hdd disk = hdd();
	disk.readData(0x80000,2,0x18);
	out io = out();
	io.multiply=5;
	io.printString("qwertyuiopasdfghjklzxcvbnm\nQWERTYUIOPASDFGHJKLZXCVBNM\n1234567890-=`'/");
	//video screen = video();
	window win = window();
	//pong = pongGame();
	//keyboard key = keyboard();
	imgView prog = imgView();
	//io.multiply=5;

	


	while(1){
		if (win.FPSLimiter(60)){
			win.draw();
			prog.update();
			//pong.draw();
			//io.drawPointer();
			io.input();
		}
	}
	while(1);
}