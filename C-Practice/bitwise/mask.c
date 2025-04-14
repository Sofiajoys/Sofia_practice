#include<stdio.h>
int main()
{
    int a=0x1234,m;
    m=((a&0xF000)>>8)|((a&0x0F00)>>8)|((a&0x00F0)<<8)|((a&0x000F)<<8);
    printf("%x",m);
}