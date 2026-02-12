#include<stdio.h>
int main()
{
    int arr[5];
    printf("enter elements in array: ");
    for(int i=0;i<5;i++)
    scanf("%d",&arr[i]);
    int max;
    max=arr[0];
    for(int i=0;i<5;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("lar: %d",max);
}