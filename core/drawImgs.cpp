#ifndef DRAWIMGS_CPP
#define DRAWIMGS_CPP

#include "stdio.cpp"
#include "disc.cpp"
#include "drawImgs.cpp"
#include "keyboard.cpp"
class drawImg{
  public:
    out io = out();
    hdd drive = hdd();
    BMP drawbmp = BMP();
    keyboard key = keyboard();

    drawImg(){
        drive.readData(imgsectors,1,0x21);
        int flag= *(unsigned int*)(imgsectors);
        
        while (flag!=0){
            countImg++;
            flag = *(unsigned int*)(imgsectors + (countImg*4));
        }
        selectedImg=0;
        draw();
    }

    void update(){
        keypressed = key.getKey();
        if((keypressed==80)&&(keypressed!=oldKey)){
            oldKey = keypressed;
            selectedImg++;
            draw();
        }
        if((keypressed==72)&&(keypressed!=oldKey)){
            oldKey = keypressed;
            selectedImg--;
            draw();
        }
    }  
private:
    int imgsectors = 0x10000;
    int countImg=0;
    int selectedImg=0;
    int keypressed=0;
    int oldKey=0;
    void draw(){
        drawbmp.drawBMP(*(unsigned int*)(imgsectors + (this->selectedImg*4)));
    }
};

#endif