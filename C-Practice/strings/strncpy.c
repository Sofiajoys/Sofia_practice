#include<stdio.h>
char *copy(char *dest, const char *src, size_t n)
{
    size_t i;
    for(int i=0;i<n && src[i]!='\0';i++)
    dest[i]=src[i];
    return dest;
}
int main()
{
    char c[20];
    char s[20]="abcdpqr";
    char d[20]="efghijklm";
    int i=4;
    copy(d,s,i);
    d[i]='\0';
    printf("%s",d);
    return 0;
}
