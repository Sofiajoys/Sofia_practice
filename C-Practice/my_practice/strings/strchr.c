#include<stdio.h>
int main()
{
    char str1[20]="sofia";
    char c='j';
    int found=0;
    for(int i=0;str1[i]!='\0';i++)
    {
        if(str1[i]==c)
        {
            found=1;
        }
    }
    if(found)
    {
        printf("%c is found in %s\n",c,str1);
    }
    else 
    {
        printf("not found\n");
    }
}