#include<stdio.h>
int main()
{
    unsigned int a,res;
    printf("enter a val: ");
    scanf("%u",&a);
    res=(((a&(0xAAAAAAAA))>>1)|((a&(0x55555555)))<<1);
    printf("after swap: %d",res);
}