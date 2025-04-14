#include<stdio.h>
int main()
{
    int num;
    start:
    printf("enter a num");
    scanf("%d",&num);
    if(num==0)
      printf("the num is zero\n");
    else if(num>0)
      printf("num is positive\n");
    else
      printf("num is negative\n");
    goto start;
    return 0;
      
}