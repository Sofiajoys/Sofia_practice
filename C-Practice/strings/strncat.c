#include<stdio.h>
#include<string.h>
char *mystrncat(char *s1,const char *s2,size_t n)
{
    size_t s1_len = strlen(s1);
    size_t i;
    for(int i=0;i<n && s2[i]!='\0';i++){
        s1[s1_len+i]=s2[i];
        s1[s1_len+i]!='\0';
    }
    return s1;
}
int main()
{
    char str1[20]="hello";
    char str2[20]="world";
    int n=3;
    mystrncat(str1,str2,n);
    printf("%s",str1);
    return 0;
}