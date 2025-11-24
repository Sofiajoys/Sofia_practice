#include<stdio.h>
int main()
{
    int a=2,b=3;
    int * const p1=&a;
    *p1=30;
    const int *p2=&a;
    p2=&b;
    const int * const p3=&a;
    printf("p1: %d\n",*p1);
    printf("p2: %d\n",*p2);
    printf("p3: %d\n",*p3);
}