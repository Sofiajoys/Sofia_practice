#include <stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int sum=0;
    printf("sum of elements are: ");
    for(int i=0;i<5;i++)
    sum+=arr[i];
    printf("%d",sum);
}