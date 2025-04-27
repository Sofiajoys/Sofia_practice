#include<stdio.h>
int main()
{
    char s1[20],s2[20];
    printf("enter a string1:");
    fgets(s1,sizeof s1,stdin);
    printf("enter a string to be copied:");
    fgets(s2,sizeof s2,stdin);
    for(int i=0;s1[i]!=0;i++)
    {
    s1[i]=s2[i];
    }
    printf("%s",s1);
}