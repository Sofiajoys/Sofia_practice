#include<stdio.h>
int main()
{
    int arr[5];
    printf("enter elements in array: ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max1,max2;
    max1=max2=arr[0];
    for(int i=0;i<5;i++)
    {
        if(max1<arr[i])
        {

            max2=max1;
            max1=arr[i];
        }
    }
    printf("max2: %d",max2);
}