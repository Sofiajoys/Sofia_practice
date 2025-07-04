#include<stdio.h>
int main()
{
    int n;
    printf("enter no of elements in array: ");
    scanf("%d",&n);
    int arr[n];
    int *p[n];
    printf("enter the elements in array: ");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int i=0;i<n;i++)
    {
        p[i]=&arr[i];
    }
    printf("the elements are: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*p[i]);
    }
    return 0;
}