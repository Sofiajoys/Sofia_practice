#include<stdio.h>
int main()
{
    int n,pos;
    printf("enter num: ");
    scanf("%d",&n);
    printf("enter pos: ");
    scanf("%d",&pos);
    n=n&(~(1<<pos));
    printf("after clear: %d",n);
}