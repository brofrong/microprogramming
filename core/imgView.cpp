#include "keyboard.cpp"
#include "drawBMP.cpp"
#include "disc.cpp"

class imgView{
    public:
        imgView(){
            disk.readData(addr,1,0x21);
            getCountImgs();
            drawBMP.center=1;
            drawBMP.clear=1;
            //drawBMP.drawNear=1;
        }

        void update(){
            keyPressed = key.getKey();
            if((keyPressed!=oldKey)){
                oldKey=keyPressed;

                if (keyPressed==77){
                    if(selected==countImgs-1){
                        selected = 0;
                        
                    } else{
                        selected++;
                    }
                    drawBMP.drawBMP(*(unsigned int*)(addr + (selected*4)));
                }
                if (keyPressed==75){
                    if(selected==0){
                        selected = countImgs-1;
                    } else{
                        selected--;
                    }
                    
                    drawBMP.drawBMP(*(unsigned int*)(addr + (selected*4)));
                }

            }
        }


    private:
        int oldKey,keyPressed;
        hdd disk = hdd();
        keyboard key = keyboard();
        BMP drawBMP = BMP();
        int countImgs=0,selected=0;
        int addr = 0x10000;
        //0x21 - адресс секторов
        void getCountImgs(){
            int flag = *(unsigned int*)(addr);
            while(flag!=0){
                countImgs++;
                flag = *(unsigned int*)(addr + (countImgs*4));
            }
            drawBMP.drawBMP(*(unsigned int*)(addr + (selected*4)));
        }

};