#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20]="sofia";
    char *p,*q;
    p=str1;
    int n;
    n=strlen(str1)-1;
    q=str1 + n;
    while(p<q)
    {
        char t=*p;
        *p=*q;
        *q=t;
        p++;
        q--;
    }
    printf("str: %s\n",str1);
}