#include<stdio.h>
int main()
{
    char n[20];
    printf("enter a num: ");
    scanf("%s",n);
    char *bin[]={"000","001","010","011","100","101","110","111"};
    printf("binary: ");
    for(int i=0;n[i]!='\0';i++)
    {
        int d=n[i]-'0';
        if(d<0 || d>7)
        {
            printf("invalid");
            return 0;
        }
        printf("%s",bin[d]);
    }
    return 0;
}