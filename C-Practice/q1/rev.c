#include<stdio.h>
int main()
{
    int rev=0,x,n,a;
    printf("enter value of n: ");
    scanf("%d",&n);
    a=n;
    for(int i=0;n!=0;i++)
    {
        x=n%10;
        rev=rev*10+x;
        n=n/10;
    }
    printf("rev num is: %d",rev);
    
}