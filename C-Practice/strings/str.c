#include<stdio.h>
int main()
{
    int len=0;
    char str[20];
    printf("enter a string: ");
    fgets(str,sizeof str,stdin);
    for(int i=0;str[i]!='\0';i++)
    {
        len++;
    }
    printf("length of the string is: %d",len-1);
}