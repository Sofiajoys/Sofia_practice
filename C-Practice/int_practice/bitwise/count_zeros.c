#include<stdio.h>
int main()
{
    int n;
    int count=0;
    printf("enter a number: ");
    scanf("%d",&n);
    for(int i=0;i<=31;i++)
    {
        if(n&(1<<i))
        {
            count++;
        }
    }
    printf("total no ones: %d",count);
    printf("total no of zeros: %d",32-count);
}