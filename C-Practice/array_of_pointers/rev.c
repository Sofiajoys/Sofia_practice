#include<stdio.h>
int main()
{
    int n;
    printf("enter no of elements: ");
    scanf("%d",&n);
    int arr[n];
    int *p[n];
    printf("enter elements in array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        p[i]=&arr[i];
    }
    for(int i=0;i<n/2;i++)
    {
        int temp = arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    printf("reversed array:\n");
    for(int k=0;k<n;k++)
    {
        printf("%d ",*p[k]);
    }
    return 0;
}