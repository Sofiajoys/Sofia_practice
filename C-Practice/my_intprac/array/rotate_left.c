#include<stdio.h>
int main()
{
    int n;
    printf("enter no of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements in array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int k;
    printf("enter no of positions: ");
    scanf("%d",&k);
    for(int r=0;r<k;r++)
    {
        int temp=arr[0];
        for(int i=0;i<n-1;i++)
        {
            arr[i]=arr[i+1];
        }
        arr[n-1]=temp;
    }
    printf("after left rotate: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}