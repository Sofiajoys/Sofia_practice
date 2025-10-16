#include<stdio.h>
int main()
{
    int n,t;
    printf("enter size of an array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements in array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }

        }
    }
    printf("elements in ascending order are: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}