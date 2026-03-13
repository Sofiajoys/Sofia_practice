#include<stdio.h>
int main()
{
    int a,b,sum,carry;
    printf("enter a val: ");
    scanf("%d",&a);
    printf("enter val of b: ");
    scanf("%d",&b);
    while(b!=0)
    {
        sum=a^b;
        carry=(a&b)<<1;
        a=sum;
        b=carry;
    }
    printf("add: %d",a);
    return a;
}