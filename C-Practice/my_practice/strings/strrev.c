#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("enter str: ");
    fgets(str,sizeof str,stdin);
    int n;
    n=strlen(str);
    for(int i=0;i<n/2;i++)
    {
        char temp=str[n-i-1];
        str[n-i-1]=str[i];
        str[i]=temp;
    }
    printf("strrev: %s",str);
}