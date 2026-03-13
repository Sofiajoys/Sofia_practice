#include<stdio.h>
int main()
{
    unsigned int a,rev=0;
    printf("enter a val: ");
    scanf("%u",&a);
    for(int i=0;i<8;i++)
    {
        rev=rev<<1;
        rev=rev|(a&1);
        a=a>>1;
        
    }
    printf("rev:%d",rev);
}