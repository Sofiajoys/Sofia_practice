#include<stdio.h>
int main()
{
    int a;
    printf("enter a num: ");
    scanf("%d",&a);
    if(a&1)
    {
        printf("odd: %d",a);
    }
    else 
    {
        printf("even: %d",a);
    }
}