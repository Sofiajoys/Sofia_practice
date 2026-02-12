#include<stdio.h>
int main()
{
    unsigned int a,rev=0;
    printf("enter a num: ");
    scanf("%u",&a);
    for(int i=0;i<32;i++)
    {
        rev|=((a>>i)&1)<<(31-i);
    }
    printf("%u",rev);
}