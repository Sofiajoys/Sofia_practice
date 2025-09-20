#include<stdio.h>
char *mystrstr(char str[],char sub[])
{
    for(int i=0;str[i]!='\0';i++)
    {
        int j=0;
        while(str[i+j] != '\0' && sub[j] != '\0' && str[i+j] == sub[j])
        {
            j++;
        }
        if(sub[j]=='\0')
        {
            return &str[i];
        }
    }
    return NULL;
}
int main()
{
char str[]="sofia joys";
char sub[]="joys";
char *result = mystrstr(str,sub);
if(result != NULL)
{
    printf("found: %s",result);
}
else
{
    printf("not found\n");
}
}