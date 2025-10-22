#include<stdio.h>
int main()
{
    int a;
    printf("enter size of array:");
    scanf("%d",&a);
    int arr1[a];
    printf("enter the elements of array:");
    for(int i=0;i<a;i++)
    scanf("%d",&arr1[i]);
    int arr2[a];
    for(int i=0;i<a;i++)
    arr2[i]=arr1[i];
    printf("after copying array 2 is: ");
    for(int i=0;i<a;i++)
    printf("%d ",arr2[i]);
}