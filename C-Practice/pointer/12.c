#include<stdio.h>
int main()
{
    int a=5;
    int *p=NULL;
    p=&a;
    printf("%p\n",p);// a add 0x100
    printf("%p\n",&p);// a add 0x100
    printf("%p\n",&a);// a add 0x100
    printf("%d\n",*p);// val 5
    printf("%d\n",a);// val 5

    return 0;
}