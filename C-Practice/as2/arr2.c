#include<stdio.h>
int main()
{
    int a;
    printf("enter size of array: ");
    scanf("%d",&a);
    int arr1[a],arr2[a],mer[2*a];
    printf("enter elements in array 1: ");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("enter elements in array 2: ");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr2[i]);
    }
    
    for(int j=0;j<a;j++)
    {
        mer[j]=arr1[j];
    }
    for(int j=0;j<a;j++)
    {
        mer[a+j]=arr2[j];
    }
    //print
    printf("merged array is: ");
    for(int i=0;i<a+a;i++)
    {
        printf("%d ",mer[i]);
    }
      for (int i = 0; i < (2*a)-1; i++) {
        for (int j = 0; j < (2*a)-i-1; j++) {
            if (mer[j] > mer[j+1]) {
                int temp = mer[j];
                mer[j] = mer[j+1];
                mer[j+1] = temp;
            }
        }
      }
    

    printf("Sorted array: ");
    for (int i = 0; i < 2*a; i++) {
        printf("%d ", mer[i]);
    }
}