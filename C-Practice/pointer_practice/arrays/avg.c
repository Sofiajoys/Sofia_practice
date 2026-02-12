#include<stdio.h>
int main()
{
    int a,sum=0,avg;
    printf("enter size : ");
    scanf("%d",&a);
    int arr[a];
    printf("enter elements: ");
    for(int i=0;i<a;i++)
    scanf("%d",&arr[i]);
    for(int i=0;i<a;i++)
    sum=sum+arr[i];
    avg=sum/a;
    printf("avg: %d",avg);
}