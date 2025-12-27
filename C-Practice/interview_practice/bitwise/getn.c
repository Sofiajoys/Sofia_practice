#include<stdio.h>
int main()
{
    int num,n;
    printf("enter a number:");
    scanf("%d",&num);
    printf("enter position:");
    scanf("%d",&n);
    num&=(1<<n);
    if(num==1)
      printf("the bit is 1");
    else
      printf("the bit is 0");
}