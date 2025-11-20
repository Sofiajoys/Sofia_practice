#include<stdio.h>
#include<string.h>
int main()
{
    char str[20]="hello";
    char *p=str;
    int count=0,n;
    n=strlen(str);
    while(*p!='\0')
    {
    if(*p=='a' || *p == 'e'|| *p=='i' || *p == 'o'|| *p == 'u' )
    {
        count++;
    }
    p++;
}
printf("no of vowels are: %d",count);
printf("no of consonants are: %d",n-count);
}