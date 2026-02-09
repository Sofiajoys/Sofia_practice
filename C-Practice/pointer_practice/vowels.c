#include<stdio.h>
int main()
{
    int *p,count=0;
    char s[10];
    p=s;
    printf("enter a string: ");
    fgets(s,10,stdin);
    while(*p!='\0')
    {
        if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u'||*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U')
        {
            count++;
        }
    }
    printf("vowels:%d",count);
}