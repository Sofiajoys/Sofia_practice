#include<stdio.h>
int main()
{
    int n,b;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("enter a bit to set");
    scanf("%d",&b);
    n=n|(1<<b);
    printf("after set: %d",n);
}

