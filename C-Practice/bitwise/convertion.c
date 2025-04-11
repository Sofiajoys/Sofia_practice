//decimal to binary
#include<stdio.h>
int main()
{
    int n,a;
    printf("enter a num:");
    scanf("%d",&n);
    for(int i=15;i>=0;i--)
    {
        printf("%d",((n>>i)&1));
        if(i%4==0 && i!=0)
           printf(" ");
    }
    return 0;
}