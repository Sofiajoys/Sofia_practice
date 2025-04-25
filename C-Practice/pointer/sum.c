#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter no of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("enter elements: ");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        sum+=(*(a+i));
    }
    printf("%d",sum);
}