#include<stdio.h>
int main()
{
    int arr1[2][2],arr2[2][2],arr[2][2];
    printf("enter elements in arr1: ");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("enter elements in arr2: ");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            arr[i][j]=arr1[i][j]-arr2[i][j];
        }
    }
    for(int i=0;i<2;i++)
    {
        printf("\n");
        for(int j=0;j<2;j++)
        {
            printf("%d\t",arr[i][j]);
        }
    }
    printf("\n\n");
}