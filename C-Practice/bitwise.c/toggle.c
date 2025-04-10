#include<stdio.h>
int main()
{
    int n,p,t;
    printf("enter a num:");
    scanf("%d",&n);
    printf("enter a position to be toggle");
    scanf("%d",&p);
    n^=(1<<p);
    printf("n is %d",n);
}