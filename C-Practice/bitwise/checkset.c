#include<stdio.h>
int main()
{
    int n;
    printf("enter a num: ");
    scanf("%d",&n);
    if((n&(n-1))!=0)
    {
        printf("num is not pow of 2");
    }
    for(int i=31;i>=0;i--)
    {
        if((n&(1<<i))!=0)
        printf("%d",i);
    }
}