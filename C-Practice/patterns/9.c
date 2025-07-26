#include<stdio.h>
int main()
{
    int n=5,j,i,k;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i+1;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            if(i==k||i==n||k==1)
            {
                printf("* ");
            }
             else
             {
                 printf("  ");
             }
        }
        printf("\n");
    }
}