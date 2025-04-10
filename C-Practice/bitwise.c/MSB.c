#include<stdio.h>
int main()
{
    int msb,n,bits;
    printf("enter a number:");
    scanf("%d",&n);
    bits=sizeof(int)*8;
    msb=1<<(bits-1);
    if(n&msb)
      printf("MSB of %d set(1)",n);
    else
      printf("MSB of %d is not set(0)",n);

}