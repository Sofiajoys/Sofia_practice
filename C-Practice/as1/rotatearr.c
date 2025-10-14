#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int k,last,n=5;
    printf("enter no of times to rotate: ");
    scanf("%d",&k);
    k=k%n;
    for(int r=0;r<k;r++)
    {
        last = arr[n-1];
        for(int i=n-1;i>0;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[0]=last;
    }
    printf("after rotating: ");
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}