#include<stdio.h>
int main()
{
    int n,pos;
    printf("enter value: ");
    scanf("%d",&n);
    printf("enter pos: ");
    scanf("%d",&pos);
    n|=(1<<pos);
    printf("after set: %d",n);
}