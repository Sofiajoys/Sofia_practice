#include<stdio.h>
int main()
{
    int a[5] = {1,2,3,4,5};
    int *arr[5];
    for(int i=0;i<5;i++)
    {
        arr[i]=&a[i];
        
    }
    for(int i=0;i<5;i++)
    {
    printf("elements of %d is: %d \n",i, *arr[i]);
    }
    return 0;

}