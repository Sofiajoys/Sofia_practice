#include<stdio.h>
#include<stdint.h>
#include"binary.h"
int main()
{
    uint8_t n,a=0;
    printf("enter bits after 0x:");
    scanf("%hhx",&n);
    /*rev<<=1;
    rev |= (n&1);
    n>>=1;*/
    for(int i=7;i>=0;i--){
        a|=(((n>>i)&1)<<7-i);
        pb(a);
    }
    printf("rev bit:%hhx",a);
}