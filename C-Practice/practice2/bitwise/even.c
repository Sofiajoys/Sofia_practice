#include<stdio.h>
int main()
{
    int n;
    printf("enter value: ");
    scanf("%d",&n);
    if((n&1)==0)
    {
        printf("%d is even",n);
    }
    else
    {
        printf("%d is not even",n);
    }
}