#include<stdio.h>
int main()
{
    char n[27];
    char *ptr;
    ptr=n;
    for(int i=0;i<=26;i++){
    *ptr='A'+i;
    ptr++;
    }
    ptr=n;
    printf("Tne alphabets are:\n");
    for(int i=0;i<26;i++){
    printf("%c ",*ptr);
    ptr++;
    }
    return 0;
}