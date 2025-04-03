#include<stdio.h>
float div(int,int);
float div(int a,int b)
{
    float x;
    x= a/(float)b;
    return x;
}
int main(void)
{
    int a=5,b=2;
    float x;
    x=div(a,b);
    printf("x=%.0001f",x);
    return 0;
}