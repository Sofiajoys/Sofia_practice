#include<stdio.h>
int main()
{
    int n,count=0;
    printf("enter val: ");
    scanf("%d",&n);
    for(int i=0;i<31;i++)
    {

        if(n&(1<<i))
        {
            count++;
        }

    }
    printf("set bits are: %d\n",count);
    printf("clear bits are: %d\n",31-count);
}