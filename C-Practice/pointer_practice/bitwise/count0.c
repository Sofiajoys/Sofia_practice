#include<stdio.h>
int main()
{
    int n,count=0;
    printf("enter a num: ");
    scanf("%d",&n);
    for(int i=0;i<32;i++)
    {
        if(n&(1<<i))
        {
            count++;
        }
    }
    printf("no of ones: %d",count);
    printf("no of zeroes: %d",32-count);
}