#include<stdio.h>
#include<string.h>
int reverse(char *p)
{
    char *start=p;
    char *end=p+strlen(p)-1;
    while(start<end)
    {
        char t=*start;
        *start=*end;
        *end=t;
        start++;
        end--;
    }
}
int main()
{
    char s[100]="embedded linux is great learning";
    char *a=strtok(s," ");
    char *b=strtok(NULL, " ");
    char *c=strtok(NULL, " ");
    char *d=strtok(NULL, " ");
    char *e=strtok(NULL, " ");
    

    reverse(a);
    reverse(b);
    reverse(c);
    reverse(d);
    reverse(e);

    printf("%s %s %s %s %s\n",a,b,c,d,e);
    return 0;
}