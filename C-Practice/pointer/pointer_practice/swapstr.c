#include<stdio.h>
int main()
{
    char str1[20]="sofia";
    char str2[20]="joys";
    char *p=str1;
    char *q=str2;
    char *temp;
    temp=p;
    p=q;
    q=temp;
    printf("str1: %s str2: %s",p,q);
}