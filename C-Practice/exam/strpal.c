#include<stdio.h>
#include<string.h>
int main()
{
    char str[20]="SOFIA";
    int n,a,b,count=1;
    n=strlen(str);
    a=0,b=n-1;
    while(a<b)
    {
        if(str[a]!=str[b])
        {
            count=0;
            break;
        }
        a++;
        b--;
    }
    if(count)
    {
        printf("palindrome");
    }
    else 
    {
        printf("not palindrome");
    }
}