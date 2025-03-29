#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20]="Hello";
    char str2[20]="World";
    printf("str2 is:%s\n",strcpy(str2,str1));
    return 0;
}