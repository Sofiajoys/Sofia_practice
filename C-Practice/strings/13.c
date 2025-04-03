#include<stdio.h>
int fact(int x)
{
    int a=x;
    if(x!=0)
    {
        a*=x;
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