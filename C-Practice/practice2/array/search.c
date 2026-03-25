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
    int p,found=0;
    printf("enter a element to search: ");
    scanf("%d",&p);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==p)
        {
            printf("%d is found at pos %d",p,i);
            found=1;
            break;
        }
    }
    if(!found)
    {
        printf("not found");
    }
}