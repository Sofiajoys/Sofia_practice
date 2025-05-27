#include<stdio.h>
int add(int *p,int*q)
{
    return *p+=*q;
}
int main()
{
    int a=6,b=2;
    printf("add:%d",add(&a,&b));
}