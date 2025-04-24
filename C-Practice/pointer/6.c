#include<stdio.h>
int add(int *p1,int *p2)
{
    int p;
    p=*p1+*p2;
    return p;
}
int main()
{
    int a=2,b=3;
    printf("add is: %d",add(&a,&b));
}
