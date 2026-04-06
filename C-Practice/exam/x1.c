#include<stdio.h>
int main()
{
    int a=7;
    int x;
    x=a++ + ++a;
    printf("%d",x);
}