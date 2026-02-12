#include<stdio.h>
int main()
{
    int arr[5];
    printf("enter elements: ");
    for(int i=0;i<5;i++)
    scanf("%d",&arr[i]);
    int min;
    min=arr[0];
    for(int i=0;i<5;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("min: %d",min);
}