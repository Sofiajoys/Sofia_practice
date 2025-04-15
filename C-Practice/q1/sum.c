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
    printf("%d ",sum);
    printf("%d",prod);
    return 0;
}