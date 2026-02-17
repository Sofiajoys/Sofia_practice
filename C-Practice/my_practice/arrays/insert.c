#include<stdio.h>
int main()
{
    int n;
    printf("enter no of elements: ");
    scanf("%d",&n);
    int arr[100];
    printf("enter elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int k,pos;
    printf("enter a element to insert: ");
    scanf("%d",&k);
    printf("enter pos: ");
    scanf("%d",&pos);
    for(int i=n;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=k;
    n++;
    printf("after insert: ");
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}