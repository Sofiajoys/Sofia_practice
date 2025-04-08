#include<stdio.h>
int main()
{
    int arr1,arr2,i,j,n;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter an array1");
    scanf("%d",&arr1);
    printf("enter an array");
    scanf("%d",&arr2);
    for(int i=0;i<n;i++)
      printf("array1 is:%d",arr1[i]);
    for(int j=0;j<n;j++)
      printf("array2 is:%d",arr2[j]);
    return 0;
}