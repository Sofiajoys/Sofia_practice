#include<stdio.h>
int main()
{
    int a;
    printf("enter a val: ");
    scanf("%d",&a);
    for(int i=0;i<=31;i++)
    {
        if(a&(1<<i))
        {
            printf("set bit is at pos: %d",i);
            break;
        }
    }
    return 0;
}