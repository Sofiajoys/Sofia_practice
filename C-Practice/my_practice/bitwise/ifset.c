#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int pos;
    printf("enter a pos: ");
    scanf("%d",&pos);
    if(n&(1<<pos))
    {
        printf("%d pos is set\n",pos);
    }
    else 
    {
        printf("%d pos is not set\n",pos);
    }
    
}