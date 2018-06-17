
void drowLineLow(int x1,int y1,int x2,int y2,int color);
void drowBackGround(int color);
void setPixel(int x,int y,int color);
int abs(int a);
void drowLineHigh(int x0,int y0,int x1,int y1,int color);
void drowLine(int x0,int y0,int x1,int y1,int color);
void drowCircle(int R,int x1,int y1,int color);
void drowSquare(int x0,int y0,int x1,int y1,int color);
void drowChar(int x,int y,int color,int multiplayer, char c);
void drowString(char *message,int x,int y,int color,int multiplayer,int offset);
int getKey();
int keyPressed();
char *videoAddr;
char *dataAddres;




int _start(){
	videoAddr=*(char**) (0x8000);
	dataAddres = *(char**) (0x8004);

	char message[255] = "";
	drowChar(0,0,0x00ff00,2,getSeconds())
	//drowString(message,0,0,0x00ff00,2,5);

	int current,last,ascii;
	int i,x=0,multiplayer=2,offset=5,y=200;
	int startx=x;
	int color=0xffffff;
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
				//drowChar(x,600,0xff0000,2,ascii);
				//x+=15;		
				if (ascii==' '){//отработка пробела
					x += (5*multiplayer) + offset;
					i++;
				} else
				if (ascii=='\n'){ //отраюота переноса строки
					x=startx;
					y+=offset+(multiplayer*7);
					i++;
				} else
				if ((x + (5*multiplayer) + offset)>1024){
					x=startx;
					y+=offset+(multiplayer*7);
				} else{
				drowChar(x,y,color,multiplayer,ascii);
				x += (5*multiplayer) + offset; //позиция для следующей буквы
				i++;
				}
			}




			last=current;
		}
	}




	while(1);
}

int getKey(){
	asm("xor eax,eax");
	asm("in al,0x60");
}

int keyPressed(){
	asm("xor eax,eax");
	asm("in al,0x61");
}

void drowChar(int x,int y,int color,int multiplayer, char letter){

	int numChar =-1;

	if ((letter>=0x61) &&(letter<=0x7a)){
		numChar = (int) letter-0x61;
	} else if ((letter>=0x41) &&(letter<=0x5a)){
		numChar = (int) letter - 0x41;
	} else if ((letter>=0x30) &&(letter<=0x39)){
		numChar = (int) letter + 26 -48;
	} else if (letter=='_'){
		numChar=36;
	} else if (letter=='-'){
		numChar=37;
	} else if (letter=='+'){
		numChar=38;
	} else if (letter=='='){
		numChar=39;
	} else if (letter=='('){
		numChar=40;
	} else if (letter==')'){
		numChar=41;
	} else if (letter=='!'){
		numChar=42;
	} else if (letter=='?'){
		numChar=43;
	} else if (letter=='.'){
		numChar=44;
	} else if (letter==','){
		numChar=45;
	} 



	if (multiplayer<=1){
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				if ( *(dataAddres+i*5+j+35*numChar)){
					setPixel(x+j,y+i,color);
				}
			}
		}
	} else{
		for (int i=0;i<7;i++){
			for (int j=0;j<5;j++){
				if ( *(dataAddres+i*5+j+35*numChar)){
					drowSquare(x+j*multiplayer,y+i*multiplayer,x+j*multiplayer+multiplayer,y+i*multiplayer+multiplayer,color);
				}
			}
		}
	}
}

void drowString(char *message,int x,int y,int color,int multiplayer,int offset){
	int i=0;
	int startx=x;
	while (message[i]){ 
		if (message[i]==' '){//отработка пробела
			x += (5*multiplayer) + offset;
			i++;
			continue;
		}
		if (message[i]=='\n'){ //отраюота переноса строки
			x=startx;
			y+=offset+(multiplayer*7);
			i++;
			continue;
		}
		if ((x + (5*multiplayer) + offset)>1024){
			x=startx;
			y+=offset+(multiplayer*7);
		}
		drowChar(x,y,color,multiplayer,message[i]);
		x += (5*multiplayer) + offset; //позиция для следующей буквы
		i++;
		//stopForSeckPlz();
	}
}


void setPixel(int x,int y,int color){
	char *p;
	p=videoAddr;
	p+=((y*1024)+x)*3;
	*(int*)p=color;
}

int abs(int a){ //абсолютное значение
	if (a>0){
		return a;
	}
	return -a;

}

void drowCircle(int R,int x1,int y1,int color){ //отрисовка круга
	int x = 0;
	int y = R;
	int delta = 1-2*R;
	int error =0;
	while (y>=0){
		setPixel(x1+x,y1+y,color);
		setPixel(x1+x,y1-y,color);
		setPixel(x1-x,y1+y,color);
		setPixel(x1-x,y1-y,color);
		error = 2 * (delta + y) -1;
		if((delta<0)&&(error<=0)){
			delta+=2*++x+1;
			continue;
		}
		error = 2*(delta - x) -1;
		if ((delta>0)&&(error>0)){
			delta += 1 -2*--y;
			continue;
		}
		x++;
		delta += 2*(x-y);
		y--;
	}
}
void drowCircleFill(int R,int x1,int y1,int color){ //отрисовка круга
	int x = 0;
	int y = R;
	int delta = 1-2*R;
	int error =0;
	while (y>=0){
		drowLine(x1+x,y1+y,x1+x,y1-y,color);
		drowLine(x1-x,y1+y,x1-x,y1-y,color);
		error = 2 * (delta + y) -1;
		if((delta<0)&&(error<=0)){
			delta+=2*++x+1;
			continue;
		}
		error = 2*(delta - x) -1;
		if ((delta>0)&&(error>0)){
			delta += 1 -2*--y;
			continue;
		}
		x++;
		delta += 2*(x-y);
		y--;
	}
}


void drowLineLow(int x0,int y0,int x1,int y1,int color){ //рисуем линию в низ влево
	int dx = x1-x0;
	int dy = y1-y0;
	int yi = 1;
	if (dy<0){
		yi = -1;
		dy = -dy;
	}
	int D = 2*dy-dx;
	int y = y0;

	for (int x=x0;x<x1;x++){ //рисуем линию в низ вправо
		setPixel(x,y,color);
		if (D>0){
			y+=yi;
			D-=2*dx;
		}
		D+=2*dy;
	}
}

void drowLineHigh(int x0,int y0,int x1,int y1,int color){
	int dx = x1-x0;
	int dy = y1-y0;
	int xi = 1;
	if (dx<0){
		xi = -1;
		dx = -dx;
	}
	int D = 2*dx -dy;
	int x = x0;

	for (int y = y0;y<y1;y++){
		setPixel(x,y,color);
		if (D>0){
			x+=xi;
			D-=2*dy;
		}
		D+=2*dx;
	}
	
}

void drowLine(int x0, int y0, int x1, int y1,int color){ //рисует линию по алгоритму
	if (abs(y1-y0) <abs(x1-x0)){
		if (x0 > x1){
			drowLineLow(x1,y1,x0,y0,color);
		} else{
			drowLineLow(x0,y0,x1,y1,color);
		}
	}else{
		if (y0 > y1){
			drowLineHigh(x1,y1,x0,y0,color);
		} else {
			drowLineHigh(x0,y0,x1,y1,color);
		}
	}
}


void drowSquare(int x0,int y0,int x1,int y1,int color){ //ресует квадрат
	for (int y=y0;y<y1;y++){
		for (int x=x0;x<x1;x++){
			setPixel(x,y,color);
		}
	}
}

void drowBackGround(int color){ // градиент следует перерабоать
	int i,j,defoltColor;
	defoltColor=color;
	for (i=0;i<768;i++){
		for (j=0;j<1024;j++){
			setPixel(j,i,color);
			if (!(j%5)){
				color+=0x000100;
				}
		}
		color=defoltColor;
	}
}

void stopForSeckPlz(){ //как же всё быстро отрисовываеться, пожайлуста помедленее!
	for(int i=0;i<10000;i++){
		for(int j=0;j<1000;j++);
	}
}
/*
void drowString(char *message,int x,int y,int color,int multiplayer,int offset){
	int i=0;
	int startx=x;
	while (message[i]){ 
		if (message[i]==' '){//отработка пробела
			x += (5*multiplayer) + offset;
			i++;
			continue;
		}
		if (message[i]=='\n'){ //отраюота переноса строки
			x=startx;
			y+=offset+(multiplayer*7);
			i++;
			continue;
		}
		if ((x + (5*multiplayer) + offset)>1024){
			x=startx;
			y+=offset+(multiplayer*7);
		}
		drowChar(x,y,color,multiplayer,message[i]);
		x += (5*multiplayer) + offset; //позиция для следующей буквы
		i++;
		//stopForSeckPlz();
	}
}*/