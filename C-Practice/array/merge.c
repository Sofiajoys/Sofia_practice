#include<stdio.h>
int main()
{
    int arr1[5],arr2[5],arr[10],i,j,n;
    printf("enter the no of elements to be sorted in 1st array: ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("enter the no of elements to be sorted in 2st array: ");
    for(int j=0;j<5;j++)
    {
        scanf("%d",&arr2[j]);
    }
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
        if(arr1[i]<arr1[j])
        {
            n=arr1[i];
            arr1[i]=arr1[j];
            arr1[j]=n;
        }
    }
    }
    for(int i=0;i<5;i++)
    printf("%d ",arr1[i]);
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
        if(arr2[i]<arr2[j])
        {
            n=arr2[i];
            arr2[i]=arr2[j];
            arr2[j]=n;
        }
    }
    }
    for(int j=0;j<5;j++){
    printf("%d ",arr2[j]);
    }
    for(int i=0;i<5;i++){
     for(int j=i+1;j<5;j++){
        if(arr1[i]<arr2[j])
        {
            n=arr1[i];
            arr1[i]=arr2[j];
            arr2[j]=n;
        }
     }
    }
    printf("%d %d",arr1[i],arr2[j]);
    return 0;
}