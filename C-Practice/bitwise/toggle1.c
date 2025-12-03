#include<stdio.h>
int main()
{
    int n,pos;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("enter a pos: ");
    scanf("%d",&pos);
    n=n^(1<<pos);
    printf("%d",n);
}