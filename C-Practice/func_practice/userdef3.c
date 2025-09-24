#include<stdio.h>
int num()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    return n;
}
int main()
{
    printf("the num is: %d",num());
}