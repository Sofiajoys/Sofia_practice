#include<stdio.h>
#include<string.h>
int main()
{
    char str[20]="hello";
    char *p=str;
    char *n=str+strlen(str)-1;
    while(p<n)
    {
        char temp=*p;
        *p=*n;
        *n=temp;
        p++;
        n--;
    }
    printf("rev str is:%s",str);
}