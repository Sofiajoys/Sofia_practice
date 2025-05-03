#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    if((n&(n-1))==0)
    {
        printf("num is pow of 2");
    }
    else
       printf("not a pow of 2");
    return 0;
}