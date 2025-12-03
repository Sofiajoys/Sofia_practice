#include<stdio.h>
char *strstr(const char *hay,const char *needle)
{
    int i,found=0;
    while(*hay[i]!='\0')
    {
        if(*hay[i]==*needle[i])
        {
            found=1;
        }
        i++;
    }
    return found;
}
int main()
{
    char[20]="Hello World";
    char *result=strstr(str,"World");
    if(result!=NULL)
    printf("found");
    else 
    {
        printf("not found");
    }
}