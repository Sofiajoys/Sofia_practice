#include<stdio.h>
int main()
{
    int n;
    printf("enter no of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elemenets in array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int m,start=0,end=n-1,mid,found=0;
    printf("enter element to search: ");
    scanf("%d",&m);
    //bin search
    while(start<end)
    {
        mid=(start+end)/2;
        if(arr[mid]==m)
        {
            printf("%d found at pos: %d",m,mid);
            found=1;
            break;
        }
        else if(arr[mid]>m)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
   if(!found)
   {
        printf("not found\n");
   }
}