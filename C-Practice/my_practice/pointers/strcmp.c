#include<stdio.h>
#include <string.h>
int main()
{
    char str1[20]="sofia";
    char str2[20]="abcde";
    char *p,*q;
    int a,b,count=0;
    p=str1;
    q=str2;
    a=strlen(str1)-1;
    b=strlen(str2)-1;
    if(a==b)
    {
        while(*p!='\0' && *q!='\0')
        {
            if(*p!=*q)
            {
                printf("strings are not equal\n");
                return 0;
            }
            p++;
            q++;
        }
        if(*p=='\0' && *q=='\0')
        {
            printf("strings are equal\n");
        }
        else 
        {
            printf("strings are not equal\n");
        }
    }
    else {
        printf("strings are not equal\n");
    }

    
}