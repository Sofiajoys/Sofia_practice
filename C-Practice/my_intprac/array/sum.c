#include<stdio.h>
int main()
{
    int arr[5],sum=0,avg;
    printf("enter elements in array: ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++)
    {
        sum+=arr[i];
    }
    printf("sum: %d",sum);
    avg=sum/2;
    printf("avg: %d",avg);

}