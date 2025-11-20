#include<stdio.h>
int main()
{
    int x,y;
    int *a,*b,temp;
    a=&x;
    b=&y;
    printf("enter two num: ");
    scanf("%d %d",&x,&y);
    temp=*a;
    *a=*b;
    *b=temp;
    printf("after swap: a=%d b=%d",x,y);
}