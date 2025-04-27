#include<stdio.h>
char *mystrcat(char *s1,  char *s2)
{
    char *ptr=s1;
    while(*ptr!='\0'){
    ptr++;
    }
    while(*s2!='\0'){
        *ptr=*s2;
        ptr++;
        s2++;
    }
    *ptr!='\0';
    return s1;
}
int main()
{
    char str1[20]="hello";
    char str2[20]="world";
    mystrcat(str1,str2);
    printf("%s",str1);
    return 0;
}
