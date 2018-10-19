
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

	//win.bmp.drawBMP(40);
	//win.bmp.startx=100;
	//win.bmp.drawBMP(4361);
	/*win.bmp.startx=420;
	win.bmp.drawBMP(533);*/
	//win.drawBMP(11851);
	win.bmp.drawBMP(16172);
	//win.drawBMP(20493);


	while(1){
		if (win.FPSLimiter(60)){
			win.draw();
			//pong.draw();
			//io.drawPointer();
			io.input();
		}
	}
	while(1);
}