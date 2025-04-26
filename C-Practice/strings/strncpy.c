#include<stdio.h>
int main()
{
    char s1[20],s2[20];
    printf("enter a string1:");
    fgets(s1,sizeof s1,stdin);
    printf("enter a string to be copied:");
    fgets(s2,sizeof s2,stdin);
    s1[20]=s2[20];
    printf("%s",s1);
}