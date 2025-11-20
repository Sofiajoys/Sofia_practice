#include<stdio.h>
int main()
{
    int len=0;
    char str[20];
    char *p;
    p=str;
    printf("enter a string:\n");
    fgets(str,20,stdin);
    while(*p!='\0')
    {
        len++;
        p++;
    }
    printf("length of the string is: %d",len);
}