int abs(int a){ //абсолютное значение
	if (a>0){
		return a;
	}
	return -a;

}

void drawCircle(int R,int x1,int y1,int color){ //отрисовка круга
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
void drawCircleFill(int R,int x1,int y1,int color){ //отрисовка круга
	int x = 0;
	int y = R;
	int delta = 1-2*R;
	int error =0;
	while (y>=0){
		drawLine(x1+x,y1+y,x1+x,y1-y,color);
		drawLine(x1-x,y1+y,x1-x,y1-y,color);
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


void drawLineLow(int x0,int y0,int x1,int y1,int color){ //рисуем линию в низ влево
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

void drawLineHigh(int x0,int y0,int x1,int y1,int color){
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

void drawLine(int x0, int y0, int x1, int y1,int color){ //рисует линию по алгоритму
	if (abs(y1-y0) <abs(x1-x0)){
		if (x0 > x1){
			drawLineLow(x1,y1,x0,y0,color);
		} else{
			drawLineLow(x0,y0,x1,y1,color);
		}
	}else{
		if (y0 > y1){
			drawLineHigh(x1,y1,x0,y0,color);
		} else {
			drawLineHigh(x0,y0,x1,y1,color);
		}
	}
}


void drawBackGround(int color){ // градиент следует перерабоать
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