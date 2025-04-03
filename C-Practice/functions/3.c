#include<stdio.h>
int mul(int a,int b)
{
    int x;
    x=a*b;
    return x;
}
int main(void)
{
    int a=5,b=2;
    int x;
    x=mul(a,b);
    printf("x=%d",x);
    return 0;
}