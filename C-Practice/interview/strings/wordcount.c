#include<stdio.h>
int main()
{
    char str[20];
    int count=1;
    printf("enter a string: ");
    fgets(str,sizeof str,stdin);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i] == ' ')
        count++;
    }
    printf("words: %d",count);
}