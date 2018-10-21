org 0x7c00
mov ah,2
mov al,40;секторы
mov bx,0x8004
mov cl,2
mov ch,0
mov dh,0
mov dl,0x80
int 0x13


call initVesa
cli

mov ax,0;
mov fs,ax
mov gs,ax
mov ss,ax
mov ds,ax
mov es,ax

mov sp,0xfffc
lgdt[gd_table]

mov eax,cr0
or eax,1
mov cr0,eax
jmp CODE_D:0x8004
ret
;дескриптор
gdt_begin:
  null_desc:
  dd 0
  dd 0
code_desc: ; таблица под сегмент кода
  dw 0xffff
  dw 0
  db 0
  db 0b10011010
  db 0b11001111
  db 0
data_desc: ; таблица под сегмент данных
  dw 0xffff
  dw 0
  db 0
  db 0b10010010
  db 0b11001111
  db 0
gdt_end:

gd_table:
  dw gdt_end - gdt_begin
  dd gdt_begin

CODE_D equ code_desc - gdt_begin
DATA_D equ data_desc - gdt_begin

initVesa:
  mov ax,0x4f01
  mov cx,0x118;1024*768*24bit
  mov di,video_table
  int 0x10

  mov ax,0x4f02
  mov bx,0x4118
  int 0x10
  mov eax,[video_table+0x28]
  mov dword[0x8000],eax
ret

video_table dd 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
