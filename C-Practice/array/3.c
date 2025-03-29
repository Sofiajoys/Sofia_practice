#include<stdio.h>
int main()
{
    int a,x=0;
    printf("enter size of array:");
    scanf("%d",&a);
    int arr[a];
    printf("enter the elements of array:");
    for(int i=0;i<a;i++)
    scanf("%d",&arr[i]);
    for(int i=0;i<a;i++)
    x= x+arr[i];
    printf("sum of the elements are:%d",x);
    return 0;
}