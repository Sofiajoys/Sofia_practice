#include<stdio.h>
#include<string.h>
int main()
{
    char src[20]="HelloWorld";
    char dest[20];
    printf("str2 is:%s\n",strncpy(dest,src,5));
    return 0;
}