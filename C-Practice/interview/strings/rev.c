#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20];
    int len=0,n;
    printf("enter string: ");
    fgets(str1,sizeof str1,stdin);
    n=strlen(str1)-1;
    for(int i=0;i<=n/2;i++)
    {
        char temp=str1[n-1-i];
        str1[n-1-i]=str1[i];
        str1[i]=temp;
    }
    printf("reverse str is: %s",str1);
}