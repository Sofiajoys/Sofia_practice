#include<stdio.h>
int main()
{
    int found=0,pos=0,i=0;
    char str[20]="HELLO";
    char c='L';
    char *p=str;
    while(*p!='\0')
    {
        if(*p==c)
        {
        found=1;
        pos=i;
        break;
        }
    p++;
    i++;
    }
    if(found)
    printf("%c found at position %d",c,pos);
    else 
    {
        printf("not found");
    }
}