#include<stdio.h>
int main()
{
    int n,a=1,b=1;
    printf("enter no of elements in an array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements in an array: ");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            a = 0;
        }
        if(arr[i]<arr[i+1])
        {
            b = 0;
        }
    }
    if(a)
    {
        printf("array is sorted in ascending order\n");
    }
    else if(b)
    {
        printf("array is sorted in descending order\n");
    }
    else
    {
        printf("array is not sorted\n");
    }
    return 0;
}