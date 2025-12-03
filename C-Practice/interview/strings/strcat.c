#include<stdio.h>
char *mystrcat(char *s1,char *s2)
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
    char str1[20]="sofia";
    char str2[20]="joys";
    mystrcat(str1,str2);
    printf("concatenated str is: %s",str1);
}