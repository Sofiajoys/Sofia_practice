#include<stdio.h>
#include<string.h>
int main()
{
    int l;
    char str1[20],temp;
    char *ptr;
    ptr=str1;
    printf("enter a string:");
    fgets(str1,20,stdin);
    l=strlen(str1)-1;
    for(int i=0;i<l/2;i++){
            temp=*(str1+i);
            *(str1+i)=*(str1+(l-i-1));
            *(str1+(l-i-1))=temp;
    }
    for(int i=0;i<l;i++)
    printf("%c",*(str1+i));
}