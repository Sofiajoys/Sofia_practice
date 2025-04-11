#include<stdio.h>
int main()
{
    int n,p;
    printf("enter a number:");
    scanf("%d",&n);
    printf("enter a position to be set");
    scanf("%d",&p);
    n|=(1<<p);
    printf("n is %d:",n);
}