#include<stdio.h>
#include<string.h>
char *mystrchr(const char *s,char c)
{
    while(*s!=0)
    {
        if(*s==c)
        return (char *)s;
        s++;
    }
    return 0;
}
int main()
{
    char str[20]="hello";
    char c='l';
    char *ptr = mystrchr(str,c);
    if(ptr!=NULL)
    {
        printf("char %c fount at position %ld",c,ptr-str);
    }
    else
        printf("position not found");

    return 0;
}