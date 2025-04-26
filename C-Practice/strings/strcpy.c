#include<stdio.h>
char *mystrcpy(char *dest, const char *src,size_t n)
{
    for(int i=0;i<n && src[i]!=0;i++)
    dest[i]=src[i];
    return dest;
}
int main()
{
    char s[20]="abcd";
    char d[20]="efgh";
    printf("%s",*mystrcpy(d,s,4));

}
