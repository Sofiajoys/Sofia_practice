#include<stdio.h>
int swap(int*p,int*q,int*r)
{
    int temp;
    temp=*p;
    *p=*r;
    *r=*q;
    *q=temp; 
    return 0;
}
int main()
{
    int a=5,b=6,c=7;
    printf("before swap:\na=%d\nb=%d\nc=%d\n",a,b,c);
    swap(&a,&b,&c);
    printf("after swap:\na=%d\nb=%d\nc=%d\n",a,b,c);
    return 0;
}