#include<stdio.h>
int main()
{
    int arr[5]={1,2,2,3,4};
    int count;
    printf("unique elements are: ");
    for(int i=0;i<5;i++)
    {
        count=0;
        for(int j=0;j<5;j++)
        {
            if(arr[i]==arr[j])
            count++;
        }
        if(count == 1)
        printf("%d ",arr[i]);
    }
}