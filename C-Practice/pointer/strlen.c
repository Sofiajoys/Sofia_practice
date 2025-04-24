#include<stdio.h>
#include<string.h>
int main()
{
    int len=0;
    char *p;
    char str1[20];
    p=str1;
    printf("enter a string:");
    fgets(str1,20,stdin);
    for(int i=0;str1[i]!='\0';i++)
    {
        len+=1;
    }
    printf("string length is %d",len);
}