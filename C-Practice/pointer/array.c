#include<stdio.h>
int main()
{
    int arr[5],*p;
    p=arr;
    printf("enter 5 elements:");
    for(int i=0;i<5;i++)
    scanf("%d",p+i);
    for(int i=0;i<5;i++)
    printf("elements are: %d\n",*(p+i));
}