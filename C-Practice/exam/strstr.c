#include<stdio.h>
int main()
{
    char str1[20]="hello this is sofia";
    char str2[20]="this";
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
            printf("%s : found",str2);
            return 0;
        }
        p++;
        
    }
    printf("not found");
}