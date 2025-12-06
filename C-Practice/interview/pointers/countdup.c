#include<stdio.h>
int main()
{
    char str1[20]="banana";
    char *p=str1;
    char c='a';
    int count=0;
    while(*p!='\0')
    {
        if(*p==c)
        {
            count++;
        }
        p++;
    }
    if(count>0)
    {
        printf(" %c occurs %d times",c,count);   
    }
    else
    {
        printf("not found");
    }
}