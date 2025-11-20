#include<stdio.h>
int main()
{
    int arr[5]={2,8,1,6,3};
    int n;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            n=arr[i];
            arr[i]=arr[j];
            arr[j]=n;
        }
    }
    printf("2nd largest element is: %d",arr[1]);
}