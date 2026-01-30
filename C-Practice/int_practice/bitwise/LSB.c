#include<stdio.h>
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    if(n&1)
    {
        printf("LSB is set");
    }
    else{
        printf("LSB is not set");
    }
}