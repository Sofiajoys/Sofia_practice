#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    if(n&(1<<31))
    {
        printf("negative");
    }
    else 
    {
        printf("positive");
    }
}