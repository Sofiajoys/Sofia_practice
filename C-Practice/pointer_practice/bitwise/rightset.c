#include<stdio.h>
int main()
{
    int n;
    printf("enter a num: ");
    scanf("%d",&n);
    for(int i=0;i<32;i++)
    {
        if((n&(1<<i)))
        {
            n=n&(~(1<<i));
            break;
        }

    }
    printf("after turn off: %d",n);

}