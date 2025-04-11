#include<stdio.h>
int main()
{
    int a,b;
    printf("enter value of a:");
    scanf("%d",&a);
    if(a%2==0)
      printf("number is even %d",a);
    else
      printf("number is odd %d",a);
    return 0;
}