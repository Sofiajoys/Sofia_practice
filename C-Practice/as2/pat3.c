#include<stdio.h>
int main()
{
    int rows,n,num=1;
    printf("enter no of rows:\n");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",num++);
        }
        printf("\n");
    }
    return 0;
}