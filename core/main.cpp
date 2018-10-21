
#include "system/video.cpp"
#include "system/keyboard.cpp"
#include "system/CMOS.h"
#include "lib/window.cpp"
#include "lib/stdio.cpp"
//#include "program/pong.cpp"
#include "system/disc.cpp"
#include "program/imgView.cpp"

int _start(){
	hdd disk = hdd();
	disk.readData(0x80000,2,0x18);
	out io = out();
	io.fontSize(50);
	io.printString("qwertyu12334567ab\nQWERTYUIOPASDFGHJKLZXCVBNM\n1234567890-=`'/");
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
			//io.input();
		}
	}
	while(1);
}