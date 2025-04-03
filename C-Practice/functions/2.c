#include<stdio.h>
int sub(int a,int b)
{
    int x;
    x=a-b;
    return x;
}
int main(void)
{
    int a=5,b=2;
    int x;
    x=sub(a,b);
    printf("x=%d",x);
    return 0;
}