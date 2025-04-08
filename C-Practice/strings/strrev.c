#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,n;
    char str1[20],temp;
    printf("enter string 1");
    fgets(str1,sizeof str1,stdin);
    n=strlen(str1)-1;
    printf("n:%d",n);
    for(int i=0;i<n/2;i++)
    {
        temp=str1[n-1-i];
        str1[n-1-i]=str1[i];
        str1[i]=temp;
    }
    printf("reversed string is:%s",str1);
}