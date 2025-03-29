#include<stdio.h>
#include<string.h>
int main()
{
    char str[20]= "Hello World";
    char ch='l';
    char* res = strrchr(str,ch);
    if (res!=0)
    {
      printf("char %c found at position:%ld",ch, res - str);
    }
    else
    {
      printf("char not found: %c", ch);
    }
    return 0;
}