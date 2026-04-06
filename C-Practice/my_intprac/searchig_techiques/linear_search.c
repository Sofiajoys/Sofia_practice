#include<stdio.h>
int main()
{
    int n;
    printf("enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements in array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int x;
    printf("enter a element to search: ");
    scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        int found=0;
        if(arr[i]==x)
        {
            printf("%d found at pos: %d\n",x,i);
            found=1;
            break;
        }
    }
}