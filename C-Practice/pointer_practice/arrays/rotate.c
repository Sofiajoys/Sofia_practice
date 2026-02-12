#include<stdio.h>
int main()
{
    int arr[5];
    printf("enter elements: ");
    for(int i=0;i<5;i++)
    scanf("%d",&arr[i]);
    int k,temp;
    printf("enter how many postions: ");
    scanf("%d",&k);
    k=k%5;
    for(int i=0;i<k;i++)
    {
        temp=arr[0];
        for(int j=0;j<4;j++)
        {
            arr[j]=arr[j+1];
        }
        arr[4]=temp;
    }
    printf("after rotating: ");
    for(int i=0;i<5;i++)
    printf("%d",arr[i]);
}