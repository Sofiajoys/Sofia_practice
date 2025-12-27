#include<stdio.h>
int main()
{
    int n;
    printf("enter no of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements in an aray: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("negative elements are: ");
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            printf("%d ",arr[i]);
        }
    }
}