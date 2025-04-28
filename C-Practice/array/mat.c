#include<stdio.h>
int main()
{
    int arr[3][3];
    printf("enter the elements in the matrix:");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("elements are:");
    for(int i=0;i<3;i++){
        printf("\n");
        for(int j=0;j<3;j++){
            printf("%d\t",arr[i][j]);
        }
    }
}