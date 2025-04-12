#include<stdio.h>
int main()
{
    int a,n,i;
    printf("enter size of array:");
    scanf("%d",&a);
    int arr[a];
    printf("enter the elements of array:");
    for(int i=0;i<a;i++)
    scanf("%d",&arr[i]);
    n=arr[0];
    for(int i=0;i<a;i++){
        if(n<arr[i])
          n=arr[i];
    
    }
    printf("largest no is %d",n);
}