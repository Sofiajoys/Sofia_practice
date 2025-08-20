#include<stdio.h>
int main()
{
    char str[20];
    int len=0;
    printf("enter string1: ");
    fgets(str,sizeof str,stdin);
    for(int i=0;str[i]!='\0';i++)
    {
        len++;
    }
    printf("length of string is: %d",len-1);

}