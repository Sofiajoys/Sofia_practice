#include<stdio.h>
int main()
{
    int n,i;
    printf("enter a num:");
    scanf("%d",&n);
    printf("enter a position to set:");
    scanf("%d",&i);
    n|=(1<<i);
    printf("%d",n);
}