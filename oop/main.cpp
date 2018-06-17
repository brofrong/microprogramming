#include "video.cpp"
int getKey();
int keyPressed();

int _start(){
	video screen=video();
	char message[255] = "Your ad here: 8(800)555-35-35"; 
	//char message[255] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	screen.drawString(message,0,50,0x00ff00,3,5);
	int current,last=-1,ascii;
	int i=0,x=0,offset=5,y=200,multiplier=3;
	int startx=x;
	int keyToASCII[2][35] = {{16,17,18,19,20,21,22,23,24,25,30,31,32,33,34,35,36,37,38,44,45,46,47,48,49,50,57,28},{113,119,101,114,116,121,117,105,111,112,97,115,100,102,103,104,106,107,108,122,120,99,118,98,110,109,' ','\n'}};
	while(1){
		current=getKey();
		if(last!=current){
			ascii=0;
			for(i=0;i<35;i++){
				if(keyToASCII[0][i] == current){
					ascii=keyToASCII[1][i];
					break;
				}
			}
			if(ascii!=0){
				if (ascii=='\n'){
					x=startx;
					y+=offset+(multiplier*7);
					i++;
				} else
				if ((x + (5*multiplier) + offset)>1024){
					x=startx;
					y+=offset+(multiplier*7);
				} else{
				screen.drawChar(x,y,0x00ff00,3,ascii);
				x += (5*multiplier) + offset;
				i++;
				}
			}
			last=current;
		}
	}
}

int getKey(){
	asm("xor eax,eax");
	asm("in al,0x60");
}

int keyPressed(){
	asm("xor eax,eax");
	asm("in al,0x61");
}
