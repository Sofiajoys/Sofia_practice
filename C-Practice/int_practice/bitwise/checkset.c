#include<stdio.h>
int main()
{
    int n,pos;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("enter a position: ");
    scanf("%d",&pos);
    if(n&(1<<pos))
    {
        printf("pos is set");
    }
    else
    {
        printf("pos is not set");
    }
}