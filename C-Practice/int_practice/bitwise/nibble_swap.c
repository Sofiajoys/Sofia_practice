#include<stdio.h>
int main()
{
    int a=0x1234,m;
    m=((a&0xF000)>>12)|((a&0x0F00)>>4)|((a&0x00F0)<<4)|((a&0x000F)<<12);
    printf("afetr swap: %x",m);
}