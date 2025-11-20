#include<stdio.h>
int main()
{
    int arr[5];
    int *p=arr;
    printf("enter an array: ");
    for(int i=0;i<5;i++)
    scanf("%d",&arr[i]);
    printf("array is:");
    for(int i=0;i<5;i++)
    printf("%d ",*(p+i));
}