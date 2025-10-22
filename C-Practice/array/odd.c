#include<stdio.h>
int main()
{
    int a,n,i,count=0;
    printf("enter size of array:");
    scanf("%d",&a);
    int arr[a];
    printf("enter the elements of array:");
    for(int i=0;i<a;i++)
    scanf("%d",&arr[i]);
    printf("odd elements are: ");
    for(int i=0;i<a;i++)
    {
        if(arr[i]%2 != 0)
        {
            printf("%d ",arr[i]);
            count++;
        }
    }
    printf("total odd elements: %d",count);
}