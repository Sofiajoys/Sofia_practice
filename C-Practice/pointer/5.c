#include<stdio.h>
int main()
{
    int a,b,c,n;
    int *p1;
    int *p2;
    int *p3;
    p1=&a;
    p2=&b;
    p3=&c;
    printf("enter a number1:");
    scanf("%d",&a);
    printf("enter a number2:");
    scanf("%d",&b);
    printf("enter a number3:");
    scanf("%d",&c);
    n=((*p1>*p2)?(*p1>*p3):printf("max is %d",*p1))?printf("max is %d",*p2):printf("max is %d",*p3);
}