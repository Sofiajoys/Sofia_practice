#include<stdio.h>
int main()
{
    int n,count=0;
    printf("enter no of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            count++;
        }
    }
    printf("even elements: %d\n",count);
    printf("odd elements: %d\n",n-count);
}