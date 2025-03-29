#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20]="Hello World";
    char str2[20]="World";
    char* p;
    p= strstr(str1,str2);
    if(p)
    {
      printf("string found\n");
      printf("First occurrence of string '%s' in '%s' is" "'%s'",str2, str1, p);
    }
    else
      printf("not found");
    return 0;
}