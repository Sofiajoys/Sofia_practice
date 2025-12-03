#include<stdio.h>
int main()
{
    char str1[20],str2[20];
    printf("enter a string: ");
    fgets(str1,sizeof str1,stdin);
    for(int i=0;str1[i]!='\0';i++)
    {
        if(str1[i]>='a' && str1[i]<='z')
        {
            str2[i]=str1[i]-32;
        }
        else if(str1[i]>='A' && str1[i]<='Z')
        {
            str2[i]=str1[i]+32;
        }
        else
        {
            str2[i]=str1[i];
        }
    }
    printf("converted str is: %s",str2);
}