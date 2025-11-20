#include<stdio.h>
int main()
{
    int arr[5]={1,2,4,5};
    int v,p;
    printf("enter value to be inserted: ");
    scanf("%d",&v);
    printf("enter pos: ");
    scanf("%d",&p);
    for(int i=5;i>=p;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[p-1]=v;
    printf("array: ");
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }

}