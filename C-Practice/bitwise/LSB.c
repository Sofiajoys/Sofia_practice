#include<stdio.h>
int main()
{
    int x;
    printf("enter any num:");
    scanf("%d",&x);
     if(x&1)
      printf("LSB of %d is set(1)",x);
    else
      printf("LSB of %d is not set(0)",x);
    return 0;
}
