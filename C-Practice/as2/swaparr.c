#include<stdio.h>
void swap(int *a,int *b,int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        temp = *(a+i);
        *(a+i) = *(b+i);
        *(b+i) = temp;
    }
}
int main()
{
    int n=5;
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={10,20,30,40,50};
    printf("before swapping: \n");
    printf("Array 1: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\nArray 2: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr2[i]);
    }
    swap(arr1,arr2,n);
    printf("\nAfter swapping: \n");
    printf("Array 1: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\nArray 2: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr2[i]);
    }
    printf("\n");
}
