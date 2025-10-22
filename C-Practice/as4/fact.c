#include<stdio.h>
int main()
{
    int fact=1,n,i;
    printf("enter a number: ");
    scanf("%d",&n);
    for(int i=n;i>0;i--)
    {
        fact = fact*i;
    }
    printf("factorial is: %d",fact);
}