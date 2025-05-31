#include<stdio.h>
int main()
{
    int n,x;
    printf("enter a num:");
    scanf("%d",&n);
    x=((n&(1<<3))|(n&(1<<2))|((n&(1<<1))>>1)|((n&(1<<0))<<1));
    printf("%d",x);
}