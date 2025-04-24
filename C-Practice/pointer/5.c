#include<stdio.h>
int main()
{
    int max,a,b,n;
    int *p1;
    int *p2;
    p1=&a;
    p2=&b;
    printf("enter a number1:");
    scanf("%d",&a);
    printf("enter a number2:");
    scanf("%d",&b);
    n=(*p1>*p2)?printf("max is %d",*p1):printf("max is %d",*p2);
}