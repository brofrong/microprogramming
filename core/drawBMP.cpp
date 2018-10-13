#include "video.cpp"

class BMP{
    video screen = video();
    //*((char*)(0x11000)); 
    public:
    int drawBMP(int adr){
        this->address = adr;
        getSize();
        
        for(int i=0;i<height;i++){
            for(int j=0;j<width;j++){
                /*
                blue =  *((char*) (this->bitMapAddress + 0 + j*3 + (i * (width*3))));
                green = *((char*) (this->bitMapAddress + 1 + j*3 + (i * (width*3))));
                red =   *((char*) (this->bitMapAddress + 2 + j*3 + (i * (width*3))));
                */
                
                blue = *((char*) (this->bitMapAddress + 0 + j*3 + ((height -1 - i) * (width*3))));
                green = *((char*) (this->bitMapAddress + 1 + j*3 + ((height -1 - i) * (width*3))));
                red = *((char*) (this->bitMapAddress + 2 + j*3 + ((height -1 - i) * (width*3))));
                
                color = red * 0x10000 + green * 0x100 + blue; 
                screen.color = color; 
                screen.setPixel(j,i+100);
            }
        }

    }
    //private:
    int color,red,green,blue;

    int test;
    int height,width;
    int address;
    char* bitMapAddress;
    void getSize(){
        this->width = (int) (*((char*)(address + 0x12)) + *((char*)(address + 0x13))*0x100);
        this->height = (int) (*((char*)(address + 0x16))+ *((char*)(address + 0x17))*0x100);   
        this->bitMapAddress = (char*)(((int) (*((char*)(address + 0x0A)))) + address);
    }


};

