#ifndef DISC_CPP
#define DISC_CPP

class hdd{
    public:
        
        void readData(int adr,int sectors,int startSector){
            while(sectors>128){
                readSectors(adr,128,startSector);
                adr+=0x10000;
                startSector+=128;
                sectors-=128;
            } 
            readSectors(adr,sectors,startSector);
        }
    private:
        int readSectors(int adr,int sectors,int startSector){
            unsigned char flag=0x80,b=0;
            asm("mov edi,[bp+12]");//адресс куда писать
        
            asm("mov edx,0x01f2");//сколько секторов читать
            asm("mov ebx,edx");
            asm("xor eax,eax");
            asm("mov al,[bp+16]");
            asm("out dx,al");

            asm("mov edx,0x01f3");//с какого сектора читать
            asm("xor eax,eax");
            asm("mov al,[bp+20]");
            asm("out dx,al");

            asm("mov edx,0x01f6");//установить режим lba
            asm("xor eax,eax");
            asm("or al, 0b01000000");
            asm("out dx,al");

            asm("mov edx,0x01f7"); //читай
            asm("xor eax,eax");
            asm("or al, 0x20");
            asm("out dx,al");


            asm("mov ecx,4");

            asm("readsectors_wait:"); //читай
            asm("in al,dx");
            asm("test al,0x80");
            asm("jne readsectors_retry");
            asm("test al,0x08");
            asm("jne readsectors_dataready");

            asm("readsectors_retry:");
            asm("dec ecx");
            asm("jg readsectors_wait");
            asm("readsectors_nextsector:");
            asm("in al, dx");
            asm("test al, 0x80");
            asm("jne readsectors_nextsector");
            asm("test al, 0x21");
            asm("jne readsectors_fail");
            
            asm("readsectors_dataready:");
            asm("mov edx,0x01f0"); //запись в память
            asm("mov ecx,256");
            asm("rep insw");

            asm("mov edx,0x01f7");//ждём 400ns
            asm("in al,dx");
            asm("in al,dx");
            asm("in al,dx");
            asm("in al,dx");

            asm("dec ebx"); //проверяем сколько секторов загрузили
            asm("cmp ebx,0");
            asm("jne readsectors_nextsector");

            asm("test al, 0x21");
            asm("jne readsectors_fail");

            
            asm("readsectors_fail:");
        }
};
#endif