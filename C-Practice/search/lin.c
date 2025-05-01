#include<stdio.h>
int linearsearch(int arr[],int n)
{
    for(int i=0;i<5;i++)
    {
        if(n==arr[i])
        return i;
    }
    return 1;
}
int main()
{
    int n=8,arr[5]={1,2,3,4,5};
    int res=linearsearch(arr,n);
    if(res!=1)
    printf("%d found at %d position",n,res);
    else
    printf("%d not found",n);
}