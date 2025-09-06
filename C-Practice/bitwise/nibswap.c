#include<stdio.h>
int main()
{
    int x=0x1234,n;
    n= ((x& 0xF000 >> 8)|(x & 0x0F00 >>8)|((x & 0x00F0)<<4)|((x&0x000F)<<12));
    printf("%x",n);

}