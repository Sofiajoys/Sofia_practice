#include<stdio.h>
int main()
{
    int n;
    printf("enter no of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements in an array:");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("the largest element is: %d",arr[0]);
    printf("the smallest element is: %d",arr[n-1]);
    return 0;
}