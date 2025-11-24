#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int main()
{
    int x=2,y=3;
    int *p=&x,*q=&y;
    int (*fp)(int,int);
    fp=add;
    printf("add is: %d",fp(*p,*q));
}