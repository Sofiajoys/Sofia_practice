#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    n=~(n);
    printf("after flip: %d",n);
}