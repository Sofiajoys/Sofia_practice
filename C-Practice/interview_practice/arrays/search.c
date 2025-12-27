#include<stdio.h>
int main()
{
    int n,found=0;
    printf("enter no of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements in array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int m;
    printf("enter element to search: ");
    scanf("%d",&m);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==m)
        {
            printf("%d is found at pos %d\n",m,i);
            found=1;
            break;
        }
         
    }
    if(!found)
    {
        printf("not found");
    }

}