#include<stdio.h>
int main()
{
    int a,b;
    printf("enter value a: ");
    scanf("%d",&a);
    printf("enter value b: ");
    scanf("%d",&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("after swap: ");
    printf("a= %d\nb=%d\n",a,b);
    
}