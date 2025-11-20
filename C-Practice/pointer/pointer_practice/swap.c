#include<stdio.h>
int main()
{
    int x,y;
    int *a,*b;
    printf("enter two numbers: ");
    scanf("%d %d",&x,&y);
    a=&x;
    b=&y;
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    printf("after swaping: ");
    printf("a=%d b=%d",x,y);
}