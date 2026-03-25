#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("enter str: ");
    fgets(str,sizeof str,stdin);
    int len;
    len=strlen(str);
    for(int i=0;i<len/2;i++)
    {
        char temp=str[len-i-1];
        str[len-i-1]=str[i];
        str[i]=temp;
    }
    printf("str is %s",str);
}