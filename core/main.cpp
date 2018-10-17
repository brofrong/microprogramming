
//#include "video.cpp"
//#include "keyboard.cpp"
#include "CMOS.h"
#include "window.cpp"
#include "stdio.cpp"
#include "pong.cpp"
#include "disc.cpp"
#include "drawImgs.cpp"

int _start(){
	//video screen = video();
	window win = window();
	out io = out();
	pong = pongGame();
	//drawImg prog = drawImg();
	hdd drive = hdd();
	//screen.drawSquare(100,100,200,200);
	
	io.multiply=5;
	
	//win.bmp.drawBMP(34);
	win.bmp.drawBMP(4355);
	/*win.bmp.drawBMP(8676);
	win.bmp.drawBMP(11845);
	win.bmp.drawBMP(16166);
	win.bmp.drawBMP(20487);*/
	
	
	

	while(1){
		if (win.FPSLimiter(60)){
			win.draw();
			//prog.update();
			//pong.draw();
			//io.drawPointer();
			//io.inputTest();

		}

	}
	while(1);
}