#include<stdio.h>
int main()
{
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    int rev=0,bits;
    for(int i=3;i>=0;i--)
    {

        bits=(n>>i)&1;
        rev|=bits << (3-i);
    }
    printf("rev: %d",rev);
}