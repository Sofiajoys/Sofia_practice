#include<stdio.h>
int main()
{
    int arr[5];
    printf("enter elements in arr: ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    printf("after insertion sort: ");
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
}