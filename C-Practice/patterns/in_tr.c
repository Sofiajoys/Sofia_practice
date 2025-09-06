#include<stdio.h>
int main()
{
    int n=8;
     for(int row = n;row <=1; row++)
        {
            for(int col = 1; col <= n-row+1; col++)
            {
                printf("* ");
            }
            printf("\n");

        }
        

}