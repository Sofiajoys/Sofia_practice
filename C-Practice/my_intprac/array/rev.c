#include<stdio.h>
int main()
{
    int arr[5];
    printf("enter elements in array: ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5/2;i++)
    {
        int temp=arr[5-i-1];
        arr[5-i-1]=arr[i];
        arr[i]=temp;
    }
    printf("arr: ");
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
}