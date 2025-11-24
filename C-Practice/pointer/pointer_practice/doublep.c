#include<stdio.h>
#include<stdlib.h>
int main()
{
    int rows=2,cols=2;
    int **ptr=malloc(rows*sizeof(int *));
    for(int i=0;i<rows;i++)
    {
        ptr[i]=malloc(cols*sizeof(int));
    }
    printf("enter elements: ");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            scanf("%d",&ptr[i][j]);
        }
    }
    printf("elements are: ");
    for(int i=0;i<rows;i++)
    {
        printf("\n");
        for(int j=0;j<cols;j++)
        {
            printf("%d",ptr[i][j]);
        }
    }
    printf("\n\n");
    free(ptr);
}