#include<stdio.h>
int main()
{
    int n,x;
    printf("enter a num:");
    scanf("%x",&n);
    x=((((n&(0xF000))>>8))|(((n&(0x0F00))>>8))|(((n&(0x00F0))<<8))|(((n&(0x000F))<<8)));
    printf("%x",x);
}