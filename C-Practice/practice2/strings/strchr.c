#include<stdio.h>
int main()
{
    int found=0;
    char str1[20];
    printf("enter str1: ");
    fgets(str1,sizeof str1,stdin);
    char c;
    printf("enter char: ");
    scanf("%s",&c);
    for(int i=0;str1[i]!='\0';i++)
    {
        if(str1[i]==c)
        {
            found=1;
        }
    }
    if(found)
    {
        printf("%c is found\n",c);
    }
    else
    {
        printf("%c is not found",c);
    }
}