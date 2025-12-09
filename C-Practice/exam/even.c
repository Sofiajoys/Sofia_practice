#include<stdio.h>
int main()
{
    int n;
    printf("enter no of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements in array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            count++;
        }
    }
    printf("even elements are: %d\n",count);
    printf("odd elements are: %d\n",n-count);
}