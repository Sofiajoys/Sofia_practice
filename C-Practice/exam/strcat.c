#include<stdio.h>
int main()
{
    char str1[20]="hello ";
    char str2[20]="world";
    char *p=str1;
    char *q=str2;
    while(*p!='\0')
    {
        p++;
    }
    while(*q!='\0')
    {
        *p=*q;
        p++;
        q++;
    }
    *p='\0';
    printf("%s",str1);
}