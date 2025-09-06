#include<stdio.h>
int main()
{
    int a=5,x;
    x=((a&(1<<3))>>1)|((a&(1<<2))<<1)|((a&(1<<1))>>1)|((a&(1<<0))<<1);
    printf("%d",x);
}