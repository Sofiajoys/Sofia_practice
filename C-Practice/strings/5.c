#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20]="Hello ";
    char str2[20]="World";
    printf("concatenated string is:%s\n",strcat(str1,str2));
    return 0;
}