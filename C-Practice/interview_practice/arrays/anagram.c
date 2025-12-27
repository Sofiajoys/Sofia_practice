#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20];
    char count[256]={0};
    printf("enter a string1: ");
    scanf("%s",str1);
    printf("enter a string2: ");
    scanf("%s",str2);
    int a,b;
    a=strlen(str1);
    b=strlen(str2);
    if(a!=b)
    {
        printf("strings are not anagram\n");
        return 0;
    }
    for(int i=0;str1[i]!='\0';i++)
    {
        count[str1[i]]++;
        count[str2[i]]--;
    }
    for(int i=0;i<256;i++)
    {
        if(count[i]!=0)
        {
            printf("strings are not anagram\n");
            return 0;
        }
    }
    printf("strings are anagram\n");
    return 0;
}