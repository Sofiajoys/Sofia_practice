#include<stdio.h>
int main()
{
    int arr[5]={1,2,2,3,3};
    printf("duplicate elements are: ");
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]==arr[j])
            for(k=j;k<5-1;k++)
        {
            arr[i]=arr[i+1];
        }
        j--;
        }
    }
}