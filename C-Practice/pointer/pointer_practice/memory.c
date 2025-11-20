#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    int n=5;
    p=malloc(n*sizeof(int));
    printf("enter elements in an array: ");
    for(int i=0;i<5;i++)
    scanf("%d",p+i);
    printf("elements in array:");
    for(int i=0;i<5;i++)
    printf(" %d",*(p+i));
    free(p);

}