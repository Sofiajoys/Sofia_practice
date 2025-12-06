#include<stdio.h>
int main()
{
    int arr[5];
    int (*ptr)[5]=&arr;
    printf("enter elements in array: ");
    for(int i=0;i<5;i++)
    scanf("%d",&((*ptr)[i]));
    printf("elements are: ");
    for(int i=0;i<5;i++)
    printf("%d ",(*ptr)[i]);
}