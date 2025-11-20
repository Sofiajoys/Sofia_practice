#include<stdio.h>
int main()
{
    int n;
    printf("enter no of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements in an array: ");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("elements in array are: ");
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
}