#include<stdio.h>
int main()
{
    char str[30];
    int len=0;
    printf("enter a string:");
    fgets(str,sizeof str,stdin);
    for(int i=0;str[i]!='\0';i++)
    len++;
    printf("length of given string is%d",len-1);
    return 0;
}