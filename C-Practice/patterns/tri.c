#include<stdio.h>
int main()
{
    int n;
    printf("enter value: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            printf("  ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("  * ");
        }

        printf("\n");
    }
}