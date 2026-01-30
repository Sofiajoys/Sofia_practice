#include<stdio.h>
int main()
{
    int n;
    printf("enter number: ");
    scanf("%d",&n);
    if(n&(1<<31))
    {
        printf("MSB is set");
    }
    else
    {
        printf("MSB is not set");
    }
}