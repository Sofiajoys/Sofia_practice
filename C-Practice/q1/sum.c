#include<stdio.h>
int main()
{
    int sum=0,prod=1,n;
    printf("enter range n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum+=i;
        prod*=i;
    }
    printf("sum is %d ",sum);
    printf("prod is %d",prod);
    return 0;
}