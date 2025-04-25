#include<stdio.h>
int lar(int *a,int *b)
{
    if(*a>*b)
    return *a;
    else
    return *b;
}
int main()
{
    int a=5,b=6;
    printf("%d",lar(&a,&b));
}