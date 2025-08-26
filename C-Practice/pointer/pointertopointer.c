#include<stdio.h>
int main()
{
    int x=5;
    int *p = &x;
    int **m=&p;
    printf("%d",**m);
}