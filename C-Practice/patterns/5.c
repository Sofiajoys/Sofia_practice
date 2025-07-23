#include<stdio.h>
int main()
{
    int n=8;
    for(int r=1;r<=n;r++)
    {
        for(int c=1;c <r;c++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(int row = 1;row <=n; row++)
        {
            for(int col = 1; col <= n-row+1; col++)
            {
                printf("* ");
            }
            printf("\n");

        }
        

}