#include<stdio.h>
int main()
{
    int n=4;
    for(int r=1;r<=n;r++)
    {
        for(int c=1;c <= r;c++)
        {
            printf("* ");
        }
        printf("\n");
    }
}