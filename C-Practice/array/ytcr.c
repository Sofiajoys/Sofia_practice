#include<stdio.h>
int main()
{
    int arr1[50],arr2[50],n;
    printf("enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements of array1: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr1[i]);
    }
    printf("enter elemnents of array2: ");
    for(int i=0;i<n;i++){
    scanf("%d",&arr2[i]);
    }
    printf("array1 is:");
    for(int i=0;i<n;i++){
      printf("%d ",arr1[i]);
    }
    printf("array2 is:");
    for(int i=0;i<n;i++){
    printf("%d ",arr2[i]);
    }
    return 0;
}