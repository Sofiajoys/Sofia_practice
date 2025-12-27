#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter no of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements in an array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    sum=sum+arr[i];
    printf("sum: %d",sum);
}