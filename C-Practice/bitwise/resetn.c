#include<stdio.h>
int main()
{
    int n,p;
    printf("enter n: ");
    scanf("%d",&n);
    printf("enter pos: ");
    scanf("%d",&p);
    n=n&(~(p<<1));
    printf("%d",n);
    return 0;
}