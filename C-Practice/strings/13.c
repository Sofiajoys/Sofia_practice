#include<stdio.h>
int fact(int x)
{
    static int a=1;
    static int i=1;
    if(i<x)
    {
        a*=1;
        fact(x--);
    }
    else
        printf("factorial is:%d\n",a);
    //printf("%d\n",x); 
}
int main()
{ int a;
    printf("enter num");
    scanf("%d",&a);
    fact(a);
    return 0;
}