#include<stdio.h>
int main()
{
    int a;
    printf("enter a val: ");
    scanf("%d",&a);
    a=((a&(1<<3))|(a&(1<<2))|(a&(1<<1))>>1|(a&(1<<0))<<1);
    printf("res: %d",a);
}