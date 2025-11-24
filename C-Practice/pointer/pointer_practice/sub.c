#include<stdio.h>
int sub(int a,int b)
{
    return a-b;
}
int main()
{
    int x=5,y=3;
    int *p=&x,*q=&y;
    int (*fp)(int,int);
    fp=sub;
    printf("result: %d",fp(*p,*q));
}