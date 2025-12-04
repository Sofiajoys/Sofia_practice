#include<stdio.h>
int main()
{
    char str[20];
    char *p=str;
    int len=0;
    printf("enter a str: ");
    fgets(str,sizeof str,stdin);
    while(*p!='\0')
    {
        len++;
        p++;
    }
    printf("length of str is: %d",len);
}