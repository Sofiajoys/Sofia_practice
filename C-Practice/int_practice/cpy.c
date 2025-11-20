#include<stdio.h>
int main()
{
    int arr1[5]={4,3,6,8,1};
    int arr2[5];
    for(int i=0;i<5;i++)
    {
        arr2[i]=arr1[i];
    }
    printf("copied array is: ");
    for(int i=0;i<5;i++)
    printf(" %d",arr2[i]);
}