#include<stdio.h>
int main()
{
    int n;
    printf("enter no of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements in arr: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int e=0,o=0;
    int even[e],odd[o];
    for(int i=0;i<n;i++)
    {
        if((arr[i]%2) == 0)
        {
            even[e++]=arr[i];
        }
        else 
        {
            odd[o++]=arr[i];
        }
        
    }
    //print
    printf("even array: ");
    for(int i=0;i<e;i++)
    {
        printf("%d ",even[i]);
    }
    printf("odd array: ");
    for(int i=0;i<o;i++)
    {
        printf("%d ",odd[i]);
    }

}