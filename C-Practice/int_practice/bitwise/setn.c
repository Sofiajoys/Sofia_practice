#include<stdio.h>
int main()
{
    int n,p;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("enter a position: ");
    scanf("%d",&p);
    n|=(1<<p);
    printf("after set: %d",n);
}