#include<stdio.h>
int main()
{
    int n;
    printf("enter no of elements: ");
    scanf("%d",&n);
    int arr1[n];
    printf("enter elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int arr2[n];
    for(int i=0;i<n;i++)
    {
        arr2[i]=arr1[i];
    }
    printf("after copying arr2: ");
    for(int i=0;i<n;i++)
    printf("%d ",arr2[i]);
}