#include<stdio.h>
int main()
{
    int n=5,fact=1;
    for(int i=n;i>0;i--)
    {
        fact = fact * i;
    }
    printf("%d",fact);
}