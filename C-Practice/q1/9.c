#include<stdio.h>
int main()
{
    int num,rem,rev=0,n;
    printf("enter a number:");
    scanf("%d",&num);
    n=num;
    for(int i=0;num!=0;i++)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(rev==n)
     printf("palindrome");
    else
     printf("not a palindrome");
    return 0;
}