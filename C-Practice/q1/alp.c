#include<stdio.h>
int main()
{
    char n;
    printf("enter a character");
    scanf("%c",&n);
    printf("lower case:");
    for(int i=0;i<=n;i++){
    if(((i>=97)&&(i<=122)))
      printf(" %c",i);
    }
}