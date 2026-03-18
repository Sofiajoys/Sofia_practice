#include<stdio.h>
#include <string.h>
int main()
{
    char str1[20]="sofia joys";
    int len;
    len=strlen(str1);
    for(int i=0;i<len/2;i++)
    {
        char temp=str1[len-i-1];
        str1[len-i-1]=str1[i];
        str1[i]=temp;
    }
    printf("rev str : %s",str1);
    int a=0,b;
    for(int i=0;i<=len;i++)
    {
        if(str1[i]==' ' || str1[i]=='\0')
        {
            b=i-1;
            while(a<b)
            {
                char t=str1[a];
                str1[a]=str1[b];
                str1[b]=t;
                a++;
                b--;
            }
            a=i+1;
        }
    }
    printf("after rev: %s",str1);
}