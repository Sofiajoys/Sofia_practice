#include<stdio.h>
#include<string.h>
int main()
{
    char str[20]="hello world";
    int n;
    n=strlen(str);
    int a=0,b=n-1;
    char temp;
    for(int i=0;i<n/2;i++)
    {
    
        temp=str[i];
        str[i]=str[n-i-1];
        str[n-i-1]=temp;
    }

    printf("rev str is: %s",str);
}