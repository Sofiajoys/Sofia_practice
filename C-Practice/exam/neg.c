#include<stdio.h>
int main()
{
    int n,count=0;
    printf("enter no of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements in array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("neg elements are: ");
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            count++;
            printf("%d ",arr[i]);
        }
    }
    printf("\ntoatal neg elements: %d",count);
}