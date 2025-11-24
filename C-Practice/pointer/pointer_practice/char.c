#include<stdio.h>
int main()
{
    char str[20]="sofia";
    char *p=str;
    while(*p!='\0')
    {
        printf("char: %c\n",*p);
        printf("address: %p\n",p);
        p++;
    }
    
}