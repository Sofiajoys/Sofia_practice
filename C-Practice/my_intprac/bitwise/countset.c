#include<stdio.h>
int main()
{
    int a;
    int count=0;
    printf("enter a val: ");
    scanf("%d",&a);
    for(int i=31;i>=0;i--)
    {
        if((a&(1<<i))!=0)
        {
            count++;
        }
    }
    printf("no of set bits: %d",count);
}