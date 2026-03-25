#include<stdio.h>
int main()
{
    int n;
    printf("enter value: ");
    scanf("%d",&n);
    for(int i=31;i>=0;i++)
    {
        if(n&(1<<i))
        {
            printf("%d is set",i);
        }
        else
        {
            printf("%d is not set",i);
        }
    }
}