#include<stdio.h>
int main()
{
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    int pos;
    printf("enter pos: ");
    scanf("%d",&pos);
    n&=~(1<<pos);
    printf("after clear: %d",n);
}