#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char *ptr;
    char str[20];
    ptr=str;
    printf("enter a string: ");
    fgets(str,sizeof str,stdin);
    n= strlen(str)-1;
    for(int i=0;i<n/2;i++)
    {
        char temp = str[n-1-i];
        str[n-1-i] = str[i];
        str[i] = temp; 
    }
    printf("reversed string is: %s",str);
}
