#include<stdio.h>
int main()
{
    int arr[5],k;
    printf("enter elements: ");
    for(int i=0;i<5;i++)
    scanf("%d",&arr[i]);
    printf("enter how many times to rotate: ");
    scanf("%d",&k);
    int temp;
    k=k%5;
    for(int i=0;i<k;i++)
    {
        temp=arr[4];
        for(int j=4;j>0;j--)
        {
            arr[j]=arr[j-1];
        }
        arr[0]=temp;
    }
    printf("after rotating: ");
    for(int i=0;i<5;i++)
    printf("%d",arr[i]);
}