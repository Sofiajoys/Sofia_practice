#include<stdio.h>
int main()
{
    int arr[5],count=0;
    printf("enter elements in array: ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++)
    {
        if((arr[i]%2)==0)
        {
            count++;
        }
    }
    printf("no of even elements are: %d\n",count);
    printf("no of odd elements are: %d\n",5-count);
}