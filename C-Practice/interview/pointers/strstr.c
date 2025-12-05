#include<stdio.h>
int main()
{
    char str1[20]="hello this is sofia";
    char str2[20]="is";
    char *p=str1;
    char *q=str2;
    while(*p!='\0')
    {
        char *start=p;
        while(*start!='\0' && *q!='\0' && *start==*q)
        {
            start++;
            q++;
        }
        if(*q=='\0')
        {
            printf("found: %s",str2);
        }
        p++;
    }
        printf("not found\n");
    
}