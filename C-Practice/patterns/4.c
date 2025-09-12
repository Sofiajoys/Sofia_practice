#include<stdio.h>
int main()
{
    int n=4;
    for(int r=1;r<=n;r++)
    {
        for(int i=1;i=n-r;i++)
        {
            printf("  ");
        }
        for(int c=1;c<=r;c++)
        {
            printf("%d ",c);
        }
        printf("\n");
    }

}
