#include<stdio.h>
int main()
{
    int arr[5]={2,1,6,8,5};
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<5;i++)
    {
            if(arr[i]>max)
            {
                max=arr[i];
            }
            if(arr[i]<min)
            {
                min=arr[i];
            }
    }
    printf("min: %d\n",min);
    printf("max: %d\n",max);
}