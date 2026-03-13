#include<stdio.h>
int main()
{
    int a,pos;
    printf("enter a val: ");
    scanf("%d",&a);
    printf("enter pos: ");
    scanf("%d",&pos);
    a&=~(1<<pos);
    printf("clear: %d",a);
}