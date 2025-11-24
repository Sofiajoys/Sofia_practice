#include<stdio.h>
int main()
{
    int a=5;
    char b='A';
    float c=2.3;
    int *p=&a;
    char *q=&b;
    float *r=&c;
    printf("p+1=%p\n",p+1);
    printf("q+1=%p\n",q+1);
    printf("r+1=%p\n",r+1);
}