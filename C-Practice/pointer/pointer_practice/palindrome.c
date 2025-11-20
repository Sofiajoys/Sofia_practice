#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int count=1;
    printf("enter a string: ");
    fgets(str,20,stdin);
    str[strcspn(str,"\n")]='\0';
    char *start=str;
    char *end=str+strlen(str)-1;
    while(start<end)
    {
        if(*start != *end)
        {
        count=0;
        break;
        }
        start++;
        end--;
    }
    if(count)
    printf("it is a palindrome");
    else
    printf("it is not a palindrome");   
}