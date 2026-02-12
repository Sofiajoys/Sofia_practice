#include<stdio.h>
int main()
{
    int n,pos;
    printf("enter a num: ");
    scanf("%d",&n);
    printf("enter pos: ");
    scanf("%d",&pos);
    n|=(1<<pos);
    printf("afetr set: %d",n);
}