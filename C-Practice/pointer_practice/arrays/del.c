#include<stdio.h>
int main()
{
    int n,d,pos;
    printf("enter no of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements: ");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("enter element to delete: ");
    scanf("%d",&d);
    printf("enter pos: ");
    scanf("%d",&pos);
    for(int i=pos;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    printf("after deleting: ");
    for(int i=0;i<n;i++)
    printf("%d",arr[i]);
    
}