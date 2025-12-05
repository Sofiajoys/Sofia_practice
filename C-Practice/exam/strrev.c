#include<stdio.h>
#include<string.h>
int main()
{
    char str[20]="hello";
    char *p=str;
    char *q=str+strlen(str)-1;
    while(p<q)
    {
        char temp=*p;
        *p=*q;
        *q=temp;
        p++;
        q--;
    }
    printf("%s\n",str);
}