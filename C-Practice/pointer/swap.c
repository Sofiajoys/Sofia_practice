#include<stdio.h>
int swap(int*p,int*q,int*r)
{
    int temp;
    temp=*p;
    *p=*r;
    *r=*q;
    *q=temp; 
    return;
}
int main()
{
    int a=5,b=6,c=7;
    printf("a=%d\nb=%d\nc=%d\n",swap(&a,&b,&c));
}