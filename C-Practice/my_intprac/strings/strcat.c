#include<stdio.h>
char *mystrcat(char *s1,char *s2)
{
    char *p=s1;
    while(*p!='\0')
    {
        *p++;
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
    char str1[20],str2[20];
    printf("enter str1: ");
    fgets(str1,sizeof str1,stdin);
    printf("enter str2: ");
    fgets(str2,sizeof str2,stdin);
    mystrcat(str1,str2);
    printf("strcat: %s",str1);
}