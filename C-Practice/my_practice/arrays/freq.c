#include<stdio.h>
int main()
{
    int arr[5]={1,1,4,3,4};
    for(int i=0;i<5;i++)
    {
        int count=0;
        for(int j=0;j<5;j++)
        {
            if(arr[i]==arr[j])
            count++;
        }
    printf("%d occurs %d times\n",arr[i],count);
    }
    
}