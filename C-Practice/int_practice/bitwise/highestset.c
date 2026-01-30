#include<stdio.h>
int main()
{
    int n,p;
    printf("enter a num: ");
    scanf("%d",&n);
    for(int i=31;i>=0;i--)
    {
        if(n&(1<<i))
        {
            printf("highest set bit %d",i);
            break;
        }
    }
    return 0;
}