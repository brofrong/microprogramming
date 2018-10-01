//#include "video.cpp"
//#include "keyboard.cpp"
#include "window.cpp"
#include "stdio.cpp"
int _start(){
	//video screen = video();
	//keyboard keys=keyboard();
	window win = window();
	out io = out();
	//screen.drawSquare(100,100,200,200);
	//win.drow();

	/*
	int color=0x00ff00, multiplier=4;
	char message[255] = "01  23456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	screen.drawString(message,0,50,color,multiplier,5);
	char ascii;
	int i=0,x=0,offset=5,y=200;
	int startx=x;
	ascii=keys.pull();
	while(1){
		ascii=keys.pull();
		if(ascii){
			if (ascii=='\n'){
				x=startx;
				y+=offset+(multiplier*7);
				i++;
			} else
			if ((x + (5*multiplier) + offset)>1024){
				x=startx;
				y+=offset+(multiplier*7);
			} else{
			screen.drawChar(x,y,color,multiplier,ascii);
			x += (5*multiplier) + offset;
			i++;
			}
		}	
		
	}
	*/
	int i=0xab12cdef;
	io.column=100;
	io.line=200;
	io.multiply=3;
	io.padding=10;
	io.printChar('1');
	io.printChar('a');
	io.printChar('g');
	io.printString("hello World!");
	io.printInt(1623129123);
	io.NL();
	io.printString("i:");
	io.printIntH(i);
	while(1){
		win.draw();
		
	};
	return 0;
}