#include<stdio.h>
int main()
{
    int n,m,pos;
    printf("enter no of elements: ");
    scanf("%d",&n);
    int arr[n+1];
    printf("enter elements in an array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter an element to insert: ");
    scanf("%d",&m);
    printf("enter position: ");
    scanf("%d",&pos);
    for(int i=n;i<pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=m;
    printf("after inserting: ");
    for(int i=0;i<n+1;i++)
    printf("%d ",arr[i]);
}