#ifndef PONG_CPP
#define PONG_CPP

#include "../system/video.cpp"
#include "../lib/stdio.cpp"
#include "../lib/math.h"
#include "../system/keyboard.cpp"

class pongGame{
public:

	out io = out();
	video screen = video();
	keyboard key = keyboard();

	/*void initialscreen(){
		io = out();
		screen = video();
	}*/

	int draw(){
		updateBall();
		updateBot();
		updatePlayer();

		drawScore();
		drawField();
		drawPlayers();
		drawBall(0xffffff);
		
		
	}

private:

	int playerY = 200;
	int botY = 200;

	void drawField(){
		screen.color = 0xffffff;
		screen.drawLine(512,48,512,768);
	}

	
	void drawPlayers(){
		screen.drawSquare(10,this->playerY,30,this->playerY+100);
		screen.drawSquare(994,this->botY,1014,this->botY+100);
	}

	int ballDY=0,ballDX=-7,ballY=408,ballX=512,botSpeed=7;
	int scorePlayer=0,scoreBot=0;

	void drawBall(int color){
		screen.color=color;
		screen.drawCircleFill(25,ballX,ballY);
	}

	void CenterBall(){
		ballX=512;
		ballY=408;
	}

	void drawScore(){
		io.fontSize(30);
		io.color(0xffffff);
		io.column = 58; 
		io.line = 200;
		screen.color = 0x000000;
		screen.drawSquare(200,58,240,100);
		io.printInt(scorePlayer);
		io.line = 800;
		screen.drawSquare(800,58,840,100);
		io.printInt(scoreBot);
	}

	void updateBall(){
		if ((ballY+25>768) || (ballY-25<48)){
			ballDY=-ballDY;
		}

		if(ballX<0){
			drawBall(0x000000);
			CenterBall();
			scoreBot++;
		}
		if(ballX>1024){
			drawBall(0x000000);
			CenterBall();
			scorePlayer++;
		}

		if((10<ballX) && (55>ballX) && (playerY<ballY) && (playerY+100>ballY)){
			ballDX=abs(ballDX);	
			ballDY=(ballY-playerY-50)/7;
		}

		if((994-25<ballX) && (botY<ballY) && (botY+100>ballY)){
			ballDX=-abs(ballDX);
			ballDY=(ballY-botY-50)/7;	
		}

		drawBall(0x000000);
		ballY+=ballDY;
		ballX+=ballDX;
	}

	/*
	void updateBot(){
		if(abs(ballY - (botY + 50)) > 50){
			if(ballY>botY){
				screen.color=0x000000;
				screen.drawSquare(994,botY,1014,botY+botSpeed);
				botY+=botSpeed;
			}else{	
				screen.color=0x000000;
				screen.drawSquare(994,botY+100-botSpeed,1014,botY+100);
				botY-=botSpeed;
			}
		}
	}
	*/


	char pressedKey;

	int botDY;

	void updateBot(){

		if(botDY<0){
			screen.color=0x000000;
			screen.drawSquare(994,botY+100-5,1014,botY+100);
		}
		if(botDY>0){
			screen.color=0x000000;
			screen.drawSquare(994,botY,1014,botY+5);
		}

		if((botY<48 && botDY<0) || (botY >668 && botDY>0)){
			botDY=0;
		}
 
		botY+=botDY;

		pressedKey = key.getKey();
		if(pressedKey==0x1f){
			botDY=5;
		} else if(pressedKey == 0x11){
			botDY=-5;
		}


/*
		if(pressedKey==0x1f){
			screen.color=0x000000;
			screen.drawSquare(994,botY,1014,botY+3);
			if (botY<668){
				botY+=3;
			}	
		} else if(pressedKey == 0x11){
			screen.color=0x000000;
			screen.drawSquare(994,botY+100-3,1014,botY+100);
			if(botY>48){
				botY-=3;
			}
			
		}*/
	}


	int playerDY;

	void updatePlayer(){
		
		if(playerDY<0){
			screen.color=0x000000;
			screen.drawSquare(10,playerY+100-5,30,playerY+100);
		}
		if(playerDY>0){
			screen.color=0x000000;
			screen.drawSquare(10,playerY,30,playerY+5);
		}
 
		if((playerY<48 && playerDY<0) || (playerY > 668 && playerDY>0)){
			playerDY=0;
		}

		playerY+=playerDY;

		pressedKey = key.getKey();
		if(pressedKey==80){
			playerDY=5;
		} else if(pressedKey == 72){
			playerDY=-5;
		}
	}


}pong;

#endif