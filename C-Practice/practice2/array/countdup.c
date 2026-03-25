#include<stdio.h>
int main()
{
    int n;
    printf("enter size: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;

            }
        }
        if(count>0)
        {
            printf("%d",arr[i]);
        }
    }

}