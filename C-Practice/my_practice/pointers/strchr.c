#include<stdio.h>
int main()
{
    char str1[20]="sofia";
    char c='j';
    char *p;
    int found=0;
    p=str1;
    while(*p!='\0')
    {
        if(*p==c)
        {
            found=1;
            break;
        }
        p++;
    }
    if(found)
    {
        printf("found");
    }
    else 
    {
        printf("not found");
    }
}