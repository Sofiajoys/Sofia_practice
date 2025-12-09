#include<stdio.h>
int main()
{
    int n;
    printf("enter no of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max1,max2;
    max1=max2=arr[0];
    for(int i=0;i<n;i++)
    {
        if(max1<arr[i])
        {
            max2=max1;
            max1=arr[i];
        }
    }
    printf("2nd largest element is: %d",max2);
}