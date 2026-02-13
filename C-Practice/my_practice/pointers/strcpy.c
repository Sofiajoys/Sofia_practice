#include<stdio.h>
int main()
{
    char str1[20]="sofia";
    char str2[20];
    char *p,*q;
    p=str1;
    q=str2;
    while(*p!='\0')
    {
        *q=*p;
        p++;
        q++;
    }
    *q='\0';
    printf("after copy: %s",str2);
}
