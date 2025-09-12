#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    if(((n&(n-1))==0)  && (n % 3 ==1))
    {
        printf("num is pow of 4");
    }
    else
       printf("not a pow of 4");
    return 0;
}