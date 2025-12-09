#include<stdio.h>
int main()
{
    int n,m;
    printf("enter no of elements: ");
    scanf("%d",&n);
    int arr1[n];
    printf("enter elements in arr1: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("enter no of elements: ");
    scanf("%d",&m);
    int arr2[m];
    printf("enter elements in arr2: ");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&arr2[i]);
    }
    int arr[n+m];

    //copy 1st array
    for(int i=0;i<n;i++)
    arr[i]=arr1[i];
    //copy 2nd array
    for(int i=0;i<n;i++)
    arr[n+i]=arr2[i];
    printf("merged array: ");
    for(int i=0;i<n+m;i++)
    printf("%d",arr[i]);
}