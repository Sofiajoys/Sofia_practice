#include<stdio.h>
int main()
{
    int arr[5]={1,2,2,3,3},i;
    int count=0;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]==arr[j])
            count++;
        }
    }
    printf("%d occurs %d times\n",i,count);
}