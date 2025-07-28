#include<stdio.h>
int main()
{
    int n;
    printf("enter a num: ");
    scanf("%d",&n);
    if(n&(1<<1))
    {
        n=n^(1<<2);
        printf("the bit is toggled: %d",n);
    }
    else{
        n=n&(~(1<<3));
        printf("the bit is reset: %d",n);
    }
    for(int i=7;i>=0;i--)
    {
        printf("%d",(n>>i)&1);
    }
    printf("\n");
}