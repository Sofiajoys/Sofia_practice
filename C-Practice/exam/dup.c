#include<stdio.h>
int main()
{
    char str1[20]="hello";
    char *p=str1;
    int found=0;
    while(*p!='\0')
    {
        char *q=p+1;
        while(*q!='\0')
        {
            if(*p==*q)
            {
                found=1;
                break;
            }
            q++;
        }
        p++;
    }
    if(found)
    {
        printf("found duplicate");
    }
    else 
    {
        printf("not found");
    }
}