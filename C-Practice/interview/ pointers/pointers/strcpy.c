#include<stdio.h>
int main()
{
    char str1[20],str2[20];
    char *p=str1;
    char *q=str2;
    printf("enter a str1: ");
    fgets(str1,sizeof str1,stdin);
    printf("enter a str2: ");
    fgets(str2,sizeof str2,stdin);
    while(*q!='\0')
    {
        *p=*q;
        p++;
        q++;
    }
    *p='\0';
    printf("after copying: %s",str1);
}