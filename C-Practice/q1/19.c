#include<stdio.h>
int add(int a,int b)
{
    int x;
    x=a+b;
    return x;
}
int avg(int a,int b)
{
    int y;
    y=(a+b)/2;
    return y;
}
int main(void)
{
    int a=5,b=2;
    int x,y;
    x=add(a,b);
    y=(a+b)/2;
    printf("x=%d",x);
    printf("y=%d",y);
    return 0;
}