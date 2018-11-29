#ifndef DRAWBMP_CPP
#define DRAWBMP_CPP

#include "../system/video.cpp"
#include "../system/disc.cpp"
//#include "stdio.cpp"

class BMP{
    video screen = video();
    hdd disk = hdd();
    //out io = out();
    //*((char*)(0x11000)); 
    public:
    int center = 0,clear=0,drawNear = 0;
    int startx=0,starty=48;
    int drawBMP(int startSector){
        getSize(startSector);
        disk.readData(this->address,this->size,startSector);
        getParameters();
        if (center){
            startx=(1024-width)/2;
            starty=(720-height)/2+48;
        }
        if (clear) clearAreaAround();
        

        for(int i=0;i<height;i++){
            for(int j=0;j<width;j++){
                
                blue = *((char*) (this->bitMapAddress + 0 + j*3 + ((height -1 - i) * (width*3))));
                green = *((char*) (this->bitMapAddress + 1 + j*3 + ((height -1 - i) * (width*3))));
                red = *((char*) (this->bitMapAddress + 2 + j*3 + ((height -1 - i) * (width*3))));
                
                color = red * 0x10000 + green * 0x100 + blue; 
                screen.color = color; 
                screen.setPixel(j+startx,i+starty);
            }
        }
        if(drawNear){
            if(startx+width>1024){
                if(starty+height>720){
                    startx=0;
                    starty=0;
                }else{
                    startx=0;
                    starty+=height;
                }
            } else{
                startx+=width;
            }
        }

    }

    /*void fastDraw(){
        disk.readData((int)screen.videoAddr+1024*200,4320,40);
    }*/
    private:

    int getSize(int startSector){
        disk.readData(this->address,1,startSector);
        this->size = ((int) *((unsigned char*)(this->address + 0x2))) + ((int)*((unsigned char*)(this->address + 0x3))*0x100) +((int) *((unsigned char*)(this->address + 0x4))*0x10000) + ((int)*((unsigned char*)(this->address + 0x5))*0x1000000); 
        this->size = (this->size/0x200)+1;
        return this->size;
    }

    void clearAreaAround(){
        screen.color=0;
        screen.drawSquare(0,48,1024,starty); //верх
        screen.drawSquare(0,starty+height,1024,768);//низ
        screen.drawSquare(0,starty,startx,starty+height);//лево
        screen.drawSquare(startx+width,starty,1024,starty+height);//право
    }

    int color,red,green,blue;
    int height,width,size;
    int address = 0x100000;
    char* bitMapAddress;
    void getParameters(){
        this->width = (int) (*((unsigned char*)(address + 0x12)) + *((unsigned char*)(address + 0x13))*0x100);
        this->height = (int) (*((unsigned char*)(address + 0x16))+ *((unsigned char*)(address + 0x17))*0x100);   
        this->bitMapAddress = (char*)(((int) (*((unsigned char*)(address + 0x0A)))) + address);
    }
    


};

#endif