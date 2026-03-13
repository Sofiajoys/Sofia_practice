#include<stdio.h>
int main()
{
    int a,x;
    printf("enter a: ");
    scanf("%x",&a);
    x=(((a&(0xF000))>>4)|((a&(0x0F00))>>4)|((a&(0x00F0))<<8)|((a&(0x000F))));
    printf("res: %x",x);

}