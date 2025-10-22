#include<stdio.h>
int main()
{
    int a,s;
    printf("enter size of array:");
    scanf("%d",&a);
    int arr1[a];
    printf("enter the elements of array:");
    for(int i=0;i<a;i++)
    scanf("%d",&arr1[i]);
    printf("enter the element for search: ");
    scanf("%d",&s);
    for(int i=0;i<a;i++)
    {
        if(s == arr1[i])
        {
            printf("found at position: %d",i);
        }
    }
}