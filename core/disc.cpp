#ifndef DISC_CPP
#define DISC_CPP

class hdd{
    public:
        
        void readData(int adr,int sectors,int startSector){
            while(sectors>0){
                readSectors(adr,128,startSector);
                adr+=0x10000;
                startSector+=128;
                sectors-=128;
            }
            //readSectors(adr,sectors,startSector);
        }
    private:
        void readSectors(int adr,unsigned char sectors,int startSector){
            unsigned char flag=128,b=2;
            asm("mov edi,[bp+12]");//адресс куда писать
            
            asm("mov edx,0x01f2");//сколько секторов читать
            asm("mov ebx,edx");
            asm("xor eax,eax");
            asm("mov al,[bp+16]");
            asm("out dx,al");

            asm("mov edx,0x01f3");//с какого сектора читать
            asm("xor eax,eax");
            asm("mov eax,[bp+20]");
            asm("out dx,al");

            asm("inc dx");
            asm("shr eax,8");
            asm("out dx,al");
            asm("inc dx");
            asm("shr eax,8");
            asm("out dx,al");

            asm("mov edx,0x01f6");//установить режим lba
            asm("xor eax,eax");
            asm("or al, 0b01000000");
            asm("out dx,al");
            

            asm("mov edx,0x01f7"); //читай
            asm("xor eax,eax");
            asm("or al, 0x20");
            asm("out dx,al");
            
            while (flag & 0b10000000){
                asm("readsectors_nextsector:in al,dx");
                asm("mov [bp-1],al");
                
            }
            
            asm("mov edx,0x01f0"); //запись в память
            asm("mov ecx,256");
            asm("rep insw");

            asm("mov edx,0x01f7");
            asm("in al,dx");
            asm("in al,dx");
            asm("in al,dx");
            asm("in al,dx");

            asm("dec ebx");
            asm("cmp ebx,0");
            asm("jne readsectors_nextsector");
            
        }
};
#endif