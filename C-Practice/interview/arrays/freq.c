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
    for(int i=0;i<n;i++)
    {
        if(arr[i]==-1)
            continue;
        int count=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                arr[j]=-1;
            }
        }
        printf("frequency of %d is %d\n",arr[i],count);
    }
}