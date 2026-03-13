#include<stdio.h>
int main()
{
    int a;
    printf("enter a val: ");
    scanf("%d",&a);
    if((a&(a-1))==0)
    {
        printf("%d is pow of 2",a);
    }
    else
    {
        printf("%d is not pow of 2",a);
    }
}