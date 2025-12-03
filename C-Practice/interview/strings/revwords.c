#include<stdio.h>
#include<string.h>
int main()
{
    char str[20]="hello world";
    int n;
    n=strlen(str);
    for(int i=0;i<n/2;i++)
    {
        char temp=str[i];
        str[i]=str[n-1-i];
        str[n-1-i]=temp;
    }
    int start=0;
    for(int i=0;i<=n;i++)
    {
        if(str[i]==' ' || str[i]=='\0')
        {
            int a=start,b=i-1;
            while(a<b)
            {
                char t=str[a];
                str[a]=str[b];
                str[b]=t;
                a++;
                b--;
            }
            start=i+1;
        }
    }
    printf("str is: %s",str);
}