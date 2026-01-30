#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    for(int i=0;i<=31;i++)
    {
        if(n&(1<<i))
        {
            printf("lowest set bit is %d",i);
        }
    }
}