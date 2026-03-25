#include<stdio.h>
int main()
{
    int n;
    printf("enter value: ");
    scanf("%d",&n);
    for(int i=0;i<31;i++)
    {
        if(n&(1<<i))
        {
            printf("%d is lowest set bit",i);
            break;
        }
    }
}