#include<stdio.h>
int main()
{
    int n,pos;
    printf("enter no of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter no of elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter a pos to delete: ");
    scanf("%d",&pos);
    for(int i=pos;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    printf("after deleting: ");
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
}