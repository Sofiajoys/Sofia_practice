#include<stdio.h>
#define five 5
int mul(int a,int b)//mul
{
    int x;
    x=a*b;
    return x;
}
int main(void)
{
    int a=five,b=2;
    int x;
    x=mul(a,b);
    printf("x=%d",x);
    return 0;
}