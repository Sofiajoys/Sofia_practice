#include<stdio.h>
int main()
{
    int n;
    printf("enter value: ");
    scanf("%d",&n);
    for(int i=n;i>=0;i--)
    {
        for(int j=i+1;j<=n;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}