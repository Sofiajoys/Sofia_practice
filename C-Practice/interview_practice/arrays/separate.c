#include<stdio.h>
int main()
{
    int n;
    printf("enter no of elements: ");
    scanf("%d",&n);
    int arr[n],even[n],odd[n];
    int e=0,o=0;
    printf("enter elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if((arr[i]%2)==0)
        {
            even[e++]=arr[i];
        }
        else 
        {
            odd[o++]=arr[i];
        }
    }
    printf("even array: ");
    for(int i=0;i<e;i++)
    {
        printf("%d ",even[i]);
    }
    printf("\nodd array: ");
    for(int i=0;i<o;i++)
    {
        printf("%d ",odd[i]);
    }
}