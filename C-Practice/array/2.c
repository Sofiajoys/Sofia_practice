#include<stdio.h>
int main()
{
    int a;
    printf("enter size of array:");
    scanf("%d",&a);
    int arr[a];
    printf("enter the elements of array:");
    for(int i=0;i<a;i++)
    scanf("%d",&arr[i]);
    printf("elements in array are:\n");
    for(int i=a-1;i>=0;i--)
    printf("%d ",arr[i]);
    return 0;
}