#include<stdio.h>
int main()
{
    int n=4;
for(int i=1;i<=n;i++)
    {
        for(int c=1;c <= i;c++)
    {
        printf("* ");
    }
        for(int j=1;j<=n-i;j++)
        {
            printf("  ");

        }
        for(int k=1;k<=i;k++)
        {
            printf("* ");
        }
        
        printf("\n");
    }
}
