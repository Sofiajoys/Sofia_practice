#include<stdio.h>
int main()
{
    char str[20];
    printf("enter a string: ");
    fgets(str,sizeof str,stdin);
    int len=0;
    for(int i=0;str[i]!='\0';i++)
    {
        len++;
    }
    printf("len: %d",len-1);
}