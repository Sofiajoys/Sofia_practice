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
    int a,start=0,end=n-1,mid,found=0;;
    printf("enter element to search: ");
    scanf("%d",&a);
    while(start<end)
    {
        mid=(start+end)/2;
        
        if(arr[mid]==a)
        {
            printf("%d found at %d",a,mid);
            found=1;
            break;
        }
        else if(arr[mid]>a)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    if(!found)
    {
        printf("not found\n");
    }
}