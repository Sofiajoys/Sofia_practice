#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int *p=arr;
    int temp,max=*p;
    int *q=(p+1);
    for(int i=0;i<5;i++)
    {
        if(*(p+i)>max)
        {
            max=*(p+i);
        }
    }
           
    printf("largest element is : %d",max);
}