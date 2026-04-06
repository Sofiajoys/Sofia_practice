#include<stdio.h>
int main()
{
    int a;
    printf("enter a value: ");
    scanf("%d",&a);
    if((a&1)==0)
    {
        printf("%d is even\n",a);
    }
    else 
    {
        printf("%d is odd\n",a);
    }
}