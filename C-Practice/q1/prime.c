#include<stdio.h>
int main()
{
    int n,p;
    printf("enter a num:");
    scanf("%d",&n);
    if((n%1==0)&&(n%n==1))
      printf("it is a prime number");
    else
      printf("not a prime");
}