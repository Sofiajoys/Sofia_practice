#include<stdio.h>
#include<string.h>
int main()
{
    char str[20]="sofia joys";
    int n;
    n=strlen(str);
    for(int i=0;i<n/2;i++)
    {
        char temp=str[n-i-1];
        str[n-i-1]=str[i];
        str[i]=temp;
    }
    printf("strrev: %s\n",str);
    int a=0,b;
    for(int i=0;i<=n;i++)
    {
        if(str[i]==' ' || str[i]=='\0')
        {
            b=i-1;
        
        while(a<b)
        {
            char t=str[b];
            str[b]=str[a];
            str[a]=t;
            a++;
            b--;
        }
        a=i+1;
        }
    }
    printf("after rev: %s\n",str);

}