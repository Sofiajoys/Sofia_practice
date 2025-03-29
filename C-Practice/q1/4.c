#include<stdio.h>
int main()
{
    int a=2,b=3,c=5;
    if((a>b)&&(a>c))
    {
        printf("%d",a);
    }
    else if(b>c)
    {
        printf("%d",b);
    }
    else
    {
        printf("%d",c);
    }
    return 0;
}