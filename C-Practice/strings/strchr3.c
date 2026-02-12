#include<stdio.h>
int main()
{
    char str[5]="hello";
    char c='l';
    int found;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==c)
        {
            found=1;
            break;
        }
    if(found)
    {
        printf("found at: %d",i);
    }
    }
}