#include "../system/video.cpp"

//1024 * 768
class Logo{
public:

    Logo(){
        this->videoAddr=*(char**) (0x8000);
        screen.color = 0x000000;
        screen.drawSquare(0,0,1024,768);

        int stepX = 1224 / 150;
        int stepC = 768 / 150;
        int r=255,g=0,b=0;

        for (int i=0;i<150;i++){
            dotsX[i] = i*stepX;
            if(r>0 && b/stepC == 0){
                r-=stepC;
                g+=stepC;
            }
            if(g>0 && r/stepC == 0){
                g-=stepC;
                b+=stepC;
            }
            if(b>0 && g/stepC == 0){
                b-=stepC;
                r+=stepC;
            }
            dotsC[i] = (r<<16)+(g<<8)+b;
            dotsS[i] = maxrand(i*45678,20)+5;
            dotsH[i] = maxrand(i*48,765)+0;
        }
    }

    int update(){
        darkerSquare(0,0,1024,768);
        for (int i=0;i<150;i++){
            screen.color = dotsC[i];
            screen.drawSquare(dotsX[i],((t+dotsH[i])*dotsS[i])%758,dotsX[i]+5,((t+dotsH[i])*dotsS[i])%758+dotsS[i]);
        }


        if (t>200){
            screen.color = 0x000000;
            screen.drawSquare(0,0,1024,768);
            return 0;
        }
        t++;
        return 1;
    }
private:
    int dotsX[150],dotsC[150],dotsS[150],dotsH[150];

    char* videoAddr;
    video screen = video();
    int t=0,darkerSpeed = 15;
    void darkerSquare(int x0,int y0,int x1,int y1){
        for (int y=y0;y<y1;y++){
			for (int x=x0;x<x1;x++){
				this->darker(x,y);
			}
		}
    }
    void darker(int x,int y){
        char *p;
		int r,g,b;
        int color;

		p=this->videoAddr;
		p+=((y*1024)+x)*3;
        color = *(int*) p;

        if((color & 0x00ff0000)>darkerSpeed*0x10000){
                color -= 0x10000*darkerSpeed;          
        } else{
            color = color &0xff00ffff;
        }
        if((color & 0x0000ff00)>darkerSpeed*0x100){
            color -= 0x100*darkerSpeed;
        }else{
            color = color &0xffff00ff;
        }
        if((color & 0x000000ff)>darkerSpeed){
            color -= darkerSpeed;
        }else{
            color = color &0xffffff00;
        }
		*(int*)p= *(int*)(p) & 0xff000000 | color & 0x00ffffff;
    }

    int random_seed = 0;
    int maxrand(int seed,int max){
        random_seed = random_seed + seed * 1103515245 + 12345;
        return (unsigned int)(random_seed/65536) %(max+1);
    }
};