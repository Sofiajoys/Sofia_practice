#include<stdio.h>
int main()
{
    int n;
    printf("enter value of n: ");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(int i=n;i>0;i--)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}