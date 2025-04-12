#include<stdio.h>
int main()
{
    int a=5;
    int* p=&a;
    printf("address of a is %p\n",p);
    printf("value of a is %d\n",a);
    printf("value at a: %d\n",*p);
    printf("address of a %p\n",&a);
    printf("value at a: %d\n",*&a);
}