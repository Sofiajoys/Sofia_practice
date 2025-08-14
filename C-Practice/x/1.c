#include<stdio.h>
int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
int main()
{
    int p=1,q=2,r;
    r=add(p,q);
    printf("%d",r);
}