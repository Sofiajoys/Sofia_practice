#include<stdio.h>
int main()
{
    char str1[20];
    char str2[20];
    char *p=str1;
    char *q=str2;
    printf("enter a string1: ");
    fgets(str1,20,stdin);
    while(*p!='\0')
    {
    *q=*p;
    p++;
    q++;
    }
    *q='\0';
    printf("str 2 is:%s",str2);
}