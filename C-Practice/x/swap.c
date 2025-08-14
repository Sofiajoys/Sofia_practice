#include<stdio.h>
int main()
{
    int a=2,b=3,c;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("a = %d b = %d",a,b);
}