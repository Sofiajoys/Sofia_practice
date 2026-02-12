#include<stdio.h>
int main()
{
    int n;
    printf("enter a num: ");
    scanf("%d",&n);
    if((n&(n-1))==0)
    {
        printf("%d is pow of 2",n);
    }
    else 
    {
        printf("%d is not pow of 2",n);
    }
}