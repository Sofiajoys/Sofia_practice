#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int max1=arr[0];
    int max2=arr[0];
    int min=arr[0];
    int *p=&max1,*q=&max2,*r=&min;
    for(int i=1;i<5;i++)
    {
        if(arr[i]>*p)
        {
            *q=*p;
            *p=arr[i];
        }
        if(arr[i]<*r)
        {
            *r=arr[i];
        }
    
    }
    printf("max=%d\n",max1);
    printf("min=%d",min);
}