#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("eneter n:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        sum+=i;
    }
    printf("sum of 1st n natural numbers: %d",sum);
}

