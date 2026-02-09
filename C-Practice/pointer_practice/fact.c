#include<stdio.h>
int main()
{
    int *p;
    int fact=1;
    printf("enter a num: ");
    scanf("%d",*(&p));
    for(int i=*p;i>0;i--)
    {
        fact*=i;
    }
    printf("factorial: %d",fact);
}