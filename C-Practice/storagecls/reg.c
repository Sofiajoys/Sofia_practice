#include<stdio.h>
static int a=5;
int main()
{
    static int a=10;
    printf("%d",a);
}