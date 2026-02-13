#include<stdio.h>
int main()
{
    char str1[20]="hello";
    char *p;
    int len=0;
    p=str1;
    while(*p!='\0')
    {
        len++;
        p++;
    }
    printf("len: %d",len);

    
}