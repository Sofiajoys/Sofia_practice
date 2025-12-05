#include<stdio.h>
int main()
{
    char str[20]="hello";
    char c='l';
    int found=0;
    char *p=str;
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
        printf("%c found in %s\n",c,str);
    }
    else 
    {
        printf("not found");
    }
}