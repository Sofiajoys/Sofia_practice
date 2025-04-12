#include<stdio.h>
#include<string.h>
int main()
{
    char *p;
    char str1[20];
    p=str1;
    printf("enter a string:");
    fgets(str1,20,stdin);
    printf("string length is %ld",strlen(p));
}