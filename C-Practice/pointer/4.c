#include<stdio.h>
int main()
{
    int m,n,p;
    int *p1;
    int *p2;
    p1=&m;
    p2=&n;
    printf("enter a number1:");
    scanf("%d",&m);
    printf("enter a number2:");
    scanf("%d",&n);
    p=*p1+*p2;
    printf("addition:%d",p);
}