#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20]="sofia";
    int len;
    len=strlen(str1);
    for(int i=0;i<len/2;i++)
    {
        char temp=str1[len-i-1];
        str1[len-i-1]=str1[i];
        str1[i]=temp;
    }
    printf("rev str : %s",str1);
}