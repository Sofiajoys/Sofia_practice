#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20]="hello";
    char str2[20]="hello";
    char *p=str1;
    char *q=str2;
    while(*p!='\0' && *q!='\0')
    {
        if(*p!=*q)
        {
            printf("strings not equal");
            return 0;
        }
        p++;
        q++;
    }
    if(*p=='\0' && *q=='\0')
    {
        printf("strings are equal");
    }
    else
    {
        printf("strings are not equal");
    }
}