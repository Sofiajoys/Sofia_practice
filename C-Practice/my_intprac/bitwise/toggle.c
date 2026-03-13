#include<stdio.h>
int main()
{
    int a,pos;
    printf("enter value: ");
    scanf("%d",&a);
    printf("enter pos: ");
    scanf("%d",&pos);
    a^=(1<<pos);
    printf("toggle: %d",a);
}