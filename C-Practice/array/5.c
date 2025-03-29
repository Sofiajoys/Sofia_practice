#include<stdio.h>
int main()
{
    int arr[100],n,x,y;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter array");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("enter value to be inserted:");
    scanf("%d",&x);
    printf("enter position:");
    scanf("%d",&y);
    for(int i=n-1;i>=y-1;i--)
        arr[i+1]=arr[i];
    arr[y-1]=x;
    n++;
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}