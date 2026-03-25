#include<stdio.h>
int main()
{
    int a;
    printf("enter value a: ");
    scanf("%d",&a);
    int n;
    n=((a&(1<<3))|(a&(1<<2))|((a&(1<<1))>>1)|((a&(1<<0))<<1));
    printf("%d",n);
}