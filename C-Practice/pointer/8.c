#include<stdio.h>
int main()
{
    int count=0,i;
    char s1[20];
    char *p;
    p=s1;
    printf("enter a string: ");
    fgets(s1,20,stdin);
    while(*p!='\0')
    {
        if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u'||*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U')
        {
        count++;
    }
    p++;
}
    printf("Number of vowels: %d\n", count); 
}