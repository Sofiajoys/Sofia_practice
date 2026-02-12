#include<stdio.h>
int main()
{
    int n;
    printf("enter a num: ");
    scanf("%d",&n);
    for(int i=31;i>=0;i--)
    {
        if((n&(1<<i))!=0)
        {
            printf("%d is set\n",i);
        }
        else
        {
            printf("%d is not set\n",i);
        }
    }
}