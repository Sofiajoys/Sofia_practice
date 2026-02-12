#include<stdio.h>
int main()
{
    int arr[5];
    printf("enter elements in array: ");
    for(int i=0;i<5;i++)
    scanf("%d",&arr[i]);
    printf("elements are: ");
    for(int i=0;i<5;i++)
    printf("%d",arr[i]);
}