#include<stdio.h>
int main()
{
    int n,p;
    printf("enter a num: ");
    scanf("%d",&n);
    printf("enter a pos: ");
    scanf("%d",&p);
    n&=~(1<<p);
    printf("after clear: %d",n);
}