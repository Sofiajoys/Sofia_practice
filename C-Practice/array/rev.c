#include<stdio.h>
int main()
{
    int a,n,i;
    int temp;
    printf("enter size of array:");
    scanf("%d",&a);
    int arr[a];
    printf("enter the elements of array:");
    for(int i=0;i<a;i++)
    scanf("%d",&arr[i]);
    printf("after rev: ");
    for(int i=0;i<a/2;i++)
    {
        temp=arr[a-1-i];
        arr[a-1-i]=arr[i];
        arr[i]=temp;
    }
    for(int i=0;i<a;i++)
    printf(" %d ",arr[i]);
}
