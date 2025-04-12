#include<stdio.h>
int add(int*p,int*q)
{
    return *p+=*q;
}
int main()
{
    int a=2,b=3;
    printf("add:%d", add(&a,&b));
}