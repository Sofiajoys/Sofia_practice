#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20]="hello world";
    int n;
    n=strlen(str1);
    for(int i=0;i<=n/2;i++)
    {
        char temp=str1[n-i-1];
        str1[n-i-1]=str1[i];
        str1[i]=temp;
    }
    printf("reversed str is %s\n",str1);
    int a=0,b;
    for(int i=0;i<=n;i++)
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
    printf("rev words: %s",str1);
}