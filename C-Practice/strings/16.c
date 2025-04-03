#include<stdio.h>
int main()
{
    char str[30];
    int i=0,len=0;
    printf("enter a string:");
    fgets(str,sizeof str,stdin);
    for(i=0;str[i]!='\0';i++)
    len+=1;
    printf("length of given string is%d",len-1);
    return 0;
}