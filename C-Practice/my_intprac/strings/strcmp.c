#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20]="abc";
    char str2[20]="abc";
    int count=0;
    int a,b;
    a=strlen(str1)-1;
    b=strlen(str2)-1;
    if(a==b)
    {
        for(int i=0;i<a;i++)
        {
            if(str1[i]==str2[i])
            {
                count++;
            }
        }
        if(count==a)
        {
            printf("strings are equal\n");
        }
        else 
        {
            printf("strings are not equal\n");
        }
    }
}