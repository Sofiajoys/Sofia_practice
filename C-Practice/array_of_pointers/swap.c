#include<stdio.h>
int main()
{
    int n;
    printf("enter no of elements in an array:");
    scanf("%d",&n);
    int arr[n];
    int *p[n];
    printf("enter elements in array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        p[i]=&arr[i];
    }
    int i,j;
    printf("enter the two positions to swap: ");
    scanf("%d %d",&i,&j);
    //swap
    int temp = *p[i];
    *p[i]=*p[j];
    *p[j]=temp;
    //print
    printf("after swapping:\n");
    for(int k=0;k<n;k++)
    {
        printf("%d ",*p[k]);
    }
    return 0;

}