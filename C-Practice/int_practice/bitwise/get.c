#include<stdio.h>
int main()
{
    int n,p;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("enter a pos: ");
    scanf("%d",&p);
    if(n&(1<<p))
    {
        printf("the pos is set");
    }
    else
    {
        printf("the pos is not set");
    }
}