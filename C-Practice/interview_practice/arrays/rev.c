#include<stdio.h>
int main()
{
    int n;
    printf("enter no of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n/2;i++)
    {
        int temp=arr[n-1-i];
        arr[n-1-i]=arr[i];
        arr[i]=temp;
    }
    printf("after reversing: ");
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
}