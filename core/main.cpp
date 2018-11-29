#include "lib/window.cpp"
#include "lib/stdio.cpp"
//#include "program/pong.cpp"
#include "system/disc.cpp"
#include "program/imgView.cpp"
#include "program/logo.cpp"
#include "lib/drawBMP.cpp"


int _start(){
	hdd disk = hdd();
	disk.readData(0x80000,2,0x18);

	Logo logo = Logo();
	
	while(logo.update());

	out io = out();
	window win = window();
	win.draw();
	//pong = pongGame();
	imgView prog = imgView();
	//io.printIntH((int)io.screen.videoAddr);
	while(1){
		if (win.FPSLimiter(60)){
			win.draw();
			prog.update();
			io.input();
			//pong.draw();
			if(win.exit()){
				break;
			}
		}
	}

	while(logo.updateExit()){};
	
	while(1);
}