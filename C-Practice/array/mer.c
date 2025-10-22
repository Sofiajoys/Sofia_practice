#include<stdio.h>
int main()
{
    int a;
    printf("enter size of array:");
    scanf("%d",&a);
    int arr1[a];
    printf("enter the elements of array1: ");
    for(int i=0;i<a;i++)
    scanf("%d",&arr1[i]);
    int arr2[a];
    printf("enter the elements of array2: ");
    for(int i=0;i<a;i++)
    scanf("%d",&arr2[i]);
    int arr[2*a];
    for(int i=0;i<a;i++)
    arr[i]=arr1[i];
    for(int i=0;i<a;i++)
    arr[a+i]=arr2[i];
    printf("after merging: ");
    for(int i=0;i<2*a;i++)
    {
        printf("%d ",arr[i]);
    }
}

