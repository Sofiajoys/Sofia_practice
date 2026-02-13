#include<stdio.h>
char *mystr(char *s1,char *s2)
{
    char *p=s1;
    while(*p!='\0')
    {
        p++;
    }
    while(*s2!='\0')
    {
        *p=*s2;
        p++;
        s2++;
    }
    *p='\0';
    return s1;
}
int main()
{
    char str1[20];
    char str2[20];
    printf("enter a string1: ");
    fgets(str1,sizeof str1,stdin);
    printf("enter a string2: ");
    fgets(str2,sizeof str2,stdin);
    mystr(str1,str2);
    printf("str1: %s",str1);
}