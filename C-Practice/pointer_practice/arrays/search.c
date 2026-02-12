#include<stdio.h>
int main()
{
    int arr[5],n=3;
    int found=0;
    printf("enter elements: ");
    for(int i=0;i<5;i++)
    scanf("%d",&arr[i]);
    for(int i=0;i<5;i++)
    {
        if(arr[i]==n)
        found=1;
    }
    if(found)
    {
        printf("%d is found",n);
    }
    else 
    {
        printf("not found");
    }
}