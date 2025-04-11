#include<stdio.h>
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if(n&(1<<31))
      printf("MSB of %d set(1)",n);
    else
      printf("MSB of %d is not set(0)",n);

}