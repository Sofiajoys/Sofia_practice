#include<stdio.h>
#include<string.h>
int main()
{
    char str[20]="hello world";
    char *p=str;
    char *q=str+strlen(str)-1;
    while(p<q)
    {
        char temp=*p;
        *p=*q;
        *q=temp;
        p++;
        q--;
    }
    char *start=str;
    char *end=str;
    while(*end!='\0')
    {
        if(*end==' ' || *(end+1)=='\0')
        {
            char *a=start;
            char *b;
            if(*(end+1)=='\0')
            {
                b=end;
            }
            else
            {
                b=end-1;
            }
            
            while(a<b)
            {
            char t=*a;
            *a=*b;
            *b=t;
            a++;
            b--;
            }
            start=end+1;
        }
        end++;
    }
    printf("after rev: %s\n",str);

}