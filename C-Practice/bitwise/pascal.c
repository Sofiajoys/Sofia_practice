#include<stdio.h>
int main()
{
    int n,term=1;
    printf("enter no of rows:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
       for(int k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(int j=0;j<=i;j++)
        {
            if(j==0||i==0)
            {
                term=1;
            }
        else
        {
            term = term*(i-j+1)/j;
    
        }
        printf("%4d",term);
        }
        printf("\n");
    }
}