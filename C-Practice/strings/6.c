#include<stdio.h>
#include<string.h>
int main()
{
    char src[20]="good bye";
    char dest[20]="hello World ";
    printf("strncat is:%s\n",strncat(dest,src,8));
    return 0;
}