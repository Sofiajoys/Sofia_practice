#include<stdio.h>
int main()
{
    int n,pos;
    printf("enter val: ");
    scanf("%d",&n);
    printf("enter pos: ");
    scanf("%d",&pos);
    n^=(1<<pos);
    printf("after toggle: %d",n);
}