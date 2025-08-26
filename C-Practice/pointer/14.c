#include<stdio.h>
int main()
{
    int *a,*b,*c,m=2,n=3;
    a=&m;
    b=&n;
    *c=*a+*b;
    printf("%d",*c);
}