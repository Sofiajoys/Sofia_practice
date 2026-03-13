#include<stdio.h>
int main()
{
    int a;
    printf("enter value: ");
    scanf("%d",&a);
    for(int i=31;i>0;i--)
    {
        if((a&(1<<i))!=0)
        {
            printf("%d is set",i);
        }
        else
        {
            printf("%d is not set",i);
        }
    }
}