#include<stdio.h>
#define my_sizeof(a) ((char*)(&a+1)-(char*)(&a))
int main()
{
    int b;
    char c;
    float d;
    printf("size of int: %ld\n",my_sizeof(b));
    printf("size of char: %ld\n",my_sizeof(c));
    printf("size of float: %ld\n",my_sizeof(d));
    return 0;
}