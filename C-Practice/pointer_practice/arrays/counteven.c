#include<stdio.h>
int main()
{
    int arr[5],count=0;
    printf("enter a elements: ");
    for(int i=0;i<5;i++)
    scanf("%d",&arr[i]);
    for(int i=0;i<5;i++)
    {
        if((arr[i]%2)==0)
        {
            count++;
        }
    }
    printf("even elements: %d",count);
    printf("odd elements: %d",5-count);
}