#include<stdio.h>
#include<ctype.h>
int main()
{
    char str1[20];
    int count=0;
    printf("enter a string: ");
    fgets(str1,sizeof str1,stdin);
    for(int i=0;str1[i]!='\0';i++)
    {
        char ch=tolower(str1[i]);
        if(str1[i]=='a' || str1[i]=='e' || str1[i]=='i' || str1[i]=='o' || str1[i]=='u')
        {
            count++;
        }
    }
    printf("no of vowels: %d",count);
}