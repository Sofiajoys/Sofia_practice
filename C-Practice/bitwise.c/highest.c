#include<stdio.h>
int main()
{
    int n,bits,order,i;
    printf("enter a number:");
    scanf("%d",&n);
    bits=sizeof(int)*8;
    for(int i=0;i<bits;i++)
    {
        if((n>>i)&1)
          order=i;
    }
    if(order!=-1)
      printf("highest order bit of %d is:%d",n,order);
    else 
      printf("0 has no set bits.");

}