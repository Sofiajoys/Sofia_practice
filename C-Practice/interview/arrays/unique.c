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
    printf("unique elements are: ");
    for(int i=0;i<n;i++)
    {
        int unique=1;
        for(int j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                unique=0;
                break;
            }
        }
        if(unique)
        {
            printf("%d ",arr[i]);
        }
    }
}