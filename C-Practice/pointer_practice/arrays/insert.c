#include<stdio.h>
int main()
{
    int n,m,pos;
    printf("enter no of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements: ");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("enter a element to insert: ");
    scanf("%d",&m);
    printf("enter a position: ");
    scanf("%d",&pos);
    for(int i=n;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=m;
    n++;
    printf("after insert: ");
    for(int i=0;i<n;i++)
    printf("%d",arr[i]);
}