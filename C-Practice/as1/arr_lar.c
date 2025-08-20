#include<stdio.h>
int main()
{
    int a,n;
    printf("enter size of an array: ");
    scanf("%d",&a);
    int arr[a];
    printf("enter elements in an array: ");
    for(int i=0;i<a;i++)
    scanf("%d",&arr[i]);
    for(int i=0;i<a;i++)
    {
        for(int j=i+1;j<a;j++)
        {
            if(arr[i]<arr[j])
            {
                n=arr[i];
                arr[i]=arr[j];
                arr[j]=n;
            }
        }
    }
    printf("the largest elements is :");
    for(int i=0;i<a;i++)
    printf("%d ",arr[i]);
}