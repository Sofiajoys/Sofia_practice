#include<stdio.h>
int main()
{
    int count = 0,p,n;
    printf("enter value of n: ");
    scanf("%d",&n);
    for(int i=0;i<32;i++)
    {
        if(n&(1<<i))
        {
            count++;
        }
    }
    printf("%d",count);
}
