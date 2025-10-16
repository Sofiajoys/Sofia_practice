#include<stdio.h>
int main()
{
    int n;
    printf("enter size of an array: ");
    scanf("%d",&n);
    int arr[n],arr1[n],arr2[2];
    int even =0,odd=0;
    printf("enter elements in an array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(i % 2 == 0)
        {
            arr1[even++]=arr[i];
        }
        else
        {
            arr2[odd++]=arr[i];
        }
    }
    printf("even array is: ");
    for(int i=0;i<even;i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\nodd array is: ");
    for(int i=0;i<odd;i++)
    {
        printf("%d ",arr2[i]);
    }
    printf("\n");
}