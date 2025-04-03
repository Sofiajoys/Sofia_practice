#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[30];
    int l=0;
    printf("enter a string:");
    fgets(str,sizeof str, stdin);
    printf("characters in the string are: \n");
    while(str[l]!='\0')
    {
      printf("%c ",str[l]);
      l++;
    }
    printf("\n");
    return 0;
}