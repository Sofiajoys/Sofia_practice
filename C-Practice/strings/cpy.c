#include<stdio.h>
int main()
{
    char str1[20],str2[20];
    printf("enter str1: ");
    fgets(str1,sizeof str1,stdin);
    printf("enter a str to be copied: ");
    fgets(str2,sizeof str2,stdin);
    for(int i=0;str1[i]!='\0';i++)
    {
        str1[i]=str2[i];
    }
    printf("the copied string is: %s",str1);

}