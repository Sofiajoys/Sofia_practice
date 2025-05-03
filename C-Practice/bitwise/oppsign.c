#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter values of a and b");
    scanf("%d%d",&a,&b);
    c=a+b;
    if((c&(1<<31))==1)
    {
        printf("opp sign");
    }
    else
    {
        printf("same sign");
    }
}