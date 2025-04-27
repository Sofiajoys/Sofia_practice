#include<stdio.h>
int mystrncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    for(int i=0;i<n;i++)
    {
        if(s1[i]!=s2[i]||s1[i]=='\0'||s2[i]=='\0')
        return (s1[i]-s2[i]);
    }
    return 0;
}
int main()
{
    char str1[20]="abcdef";
    char str2[20]="abcjkl";
    int n=3;
    int result=mystrncmp(str1,str2,n);    
    if(result==0)
    {
        printf("equal");
    }
    else
    printf("not equal");
}
