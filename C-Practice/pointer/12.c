#include<stdio.h>
int main()
{
    int a=5;
    int *p=NULL;
    p=&a;
    printf("var add: %p\n",p);// a add 0x100
    printf("pointer add: %p\n",&p);// p add 0x100
    printf("var add: %p\n",&a);// a add 0x100
    printf("val of a: %d\n",*p);// val 5
    printf("val of a: %d\n",a);// val 5

    return 0;
}