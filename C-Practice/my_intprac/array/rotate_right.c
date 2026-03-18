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
    printf("enter k positions: ");
    scanf("%d",&k);
    k=k%n;
    for(int r=0;r<k;r++)
    {
        int temp=arr[n-1];
        for(int i=n-1;i>0;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[0]=temp;
    }
    printf("after right rot: ");
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}