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
    int pos;
    printf("enter position to be deleted: ");
    scanf("%d",&pos);
    for(int i=pos;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    printf("after deleting: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}