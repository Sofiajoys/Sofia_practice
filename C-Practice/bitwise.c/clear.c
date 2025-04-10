#include<stdio.h>
int main()
{
    int num,n;
    printf("enter a num:");
    scanf("%d",&num);
    printf("enter a position:");
    scanf("%d",&n);
    num&=(~(1<<n));
    printf("num is:%d",num);
}