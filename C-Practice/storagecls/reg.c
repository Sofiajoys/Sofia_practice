#include<stdio.h>
register int a=5;
int main()
{
    extern int a=10;
    printf("%d",a);
    
}