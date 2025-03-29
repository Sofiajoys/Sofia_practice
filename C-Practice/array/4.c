#include<stdio.h>
int main()
{
    int a;
    printf("enter size of array:");
    scanf("%d",&a);
    int arr1[a],arr2[a];
    printf("enter the elements of array:");
    for(int i=0;i<a;i++)
    scanf("%d",&arr1[i]);
    for(int i=0;i<a;i++)
    arr2[i]=arr1[i];
    printf("elements in arr1:\n");
    for(int i=0;i<a;i++)
    printf("%d ",arr1[i]);
    printf("\nelements in arr2:\n");
    for(int i=0;i<a;i++)
    printf("%d ",arr2[i]);
    return 0;
}