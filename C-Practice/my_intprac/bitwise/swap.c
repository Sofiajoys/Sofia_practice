#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a value: ");
    scanf("%d",&a);
    printf("enter b value: ");
    scanf("%d",&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("a: %d\nb: %d\n",a,b);
}