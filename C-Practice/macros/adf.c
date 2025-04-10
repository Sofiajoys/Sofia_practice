#include<stdio.h>
int main()
{
    int hex=0x1234;
    printf("%x",hex|((1<<6)|(1<<7)));

}