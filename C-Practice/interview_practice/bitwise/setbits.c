#include<stdio.h>
int main()
{
    int a,pos;
    printf("enter a number: ");
    scanf("%d",&a);
    printf("enter position: ");
    scanf("%d",&pos);
    if(a&(1<<pos))
    {
        printf("%d bit is set",pos);
    }
    else
    {
        printf("not set");
    }
}