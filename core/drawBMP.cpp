#ifndef DRAWBMP_CPP
#define DRAWBMP_CPP

#include "video.cpp"
#include "disc.cpp"
#include "stdio.cpp"

class BMP{
    hdd disc = hdd();
    video screen = video();
    out io = out();
    //*((char*)(0x11000)); 
    public:
    int startx=0,starty=48;
    int drawBMP(int startSector){
        getSize(startSector);
        
        io.multiply=5;
        io.printInt(size);
        io.NL();
        io.printInt(startSector);
        io.NL();
        io.printInt(address);
        disc.readData(this->address,this->size,startSector);
        getParameters();
        io.printInt(height);
        io.NL();
        io.printInt(width);

        for (int i=0;i<0x1fffffff;i++){

        }

        if(height>720){
            height=720;
        }
        if(width>1024){
            width=1024;
        }

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
    }

    private:

    int getSize(int startSector){
        disc.readData(this->address,1,startSector);

        this->size = ((unsigned int) *((unsigned char*)(this->address + 0x2))) + ((unsigned int)*((unsigned char*)(this->address + 0x3))*0x100) +((unsigned int) *((unsigned char*)(this->address + 0x4))*0x10000) + ((unsigned int)*((unsigned char*)(this->address + 0x5))*0x1000000);         
        this->size = (this->size/0x200)+1;

        return this->size;
    }

    int color,red,green,blue;
    int height,width,size;
    int address = 0x100000;
    char* bitMapAddress;
    void getParameters(){
        this->width = (unsigned int) (*((unsigned char*)(address + 0x12)) + *((unsigned char*)(address + 0x13))*0x100);
        this->height = (unsigned int) (*((unsigned char*)(address + 0x16))+ *((unsigned char*)(address + 0x17))*0x100);   
        this->bitMapAddress = (char*)(((unsigned int) (*((unsigned char*)(address + 0x0A)))) + address);
    }
    


};
#endif
