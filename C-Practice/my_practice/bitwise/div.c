#include<stdio.h>
int main()
{
    int n;
    printf("enter a num: ");
    scanf("%d",&n);
    n=n>>2;//divide by 4
    printf("div: %d",n);
}