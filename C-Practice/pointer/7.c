#include<stdio.h>
int main()
{
    int *p,fact=1;
    printf("enter a number:");
    scanf("%d",*&p);
    for(int i=*p;i>0;i--)
    fact*=i;
    printf("factorial is %d",fact);
}