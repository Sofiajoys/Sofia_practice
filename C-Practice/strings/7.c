#include<stdio.h>
#include<string.h>
int main()
{
    int res;
    char str1[20];
    char str2[20];
    printf("enter string1:");
    scanf("%s",str1);
    printf("enter string2:");
    scanf("%s",str2);
    res = strcmp(str1,str2);
    if (res==0)
      printf("equal");
    else
      printf("unequal");
    return 0;
}