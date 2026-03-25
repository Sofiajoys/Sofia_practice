#include<stdio.h>
int main()
{
    int n;
    printf("enter no of elements in array: ");
    scanf("%d",&n);
    int arr[n+1];
    printf("enter elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int p,pos;
    printf("enter a element to insert: ");
    scanf("%d",&p);
    printf("enter pos: ");
    scanf("%d",&pos);
    for(int i=n;i>pos;i--)
    {
        arr[i]=arr[i-1];      
    }
    arr[pos]=p;
    for(int i=0;i<n+1;i++)
    {
        printf("%d ",arr[i]);
    }
}