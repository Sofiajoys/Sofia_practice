#include<stdio.h>
int main()
{
    int n,count=0;
    printf("enter n: ");
    scanf("%d",&n);
    for(int i=31;i>=0;i--)
    {
        if(n&(1<<i))
        {
            count++;
        }
    }
    printf("set bits:%d",count);
}