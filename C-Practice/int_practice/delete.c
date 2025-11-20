#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int p;
    printf("enter pos: ");
    scanf("%d",&p);
    for(int i=p;i<5-1;i++)
    {
        arr[i]=arr[i+1];
    }
    printf("array: ");
    for(int i=0;i<5-1;i++)
    {
        printf("%d ",arr[i]);
    }

}