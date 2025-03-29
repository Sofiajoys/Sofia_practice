#include<stdio.h>
#include<string.h>
int main()
{
    int res;
    char dest[20];
    char src[20];
    printf("enter string1:");
    scanf("%s",dest);
    printf("enter string2:");
    scanf("%s",src);
    res = strncmp(dest,src,5);
    if (res==0)
      printf("equal");
    else
      printf("unequal");
    return 0;
}