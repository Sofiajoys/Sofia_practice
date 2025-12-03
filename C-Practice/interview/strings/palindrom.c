#include<stdio.h>
#include<string.h>
int main()
{
    char str[20]="madam";
    int found=1;
    int l=0,r=strlen(str)-1;
    while(l<r)
    {
        if(str[l]!=str[r])
        {
            found=0;
            break;
        }
        l++;
        r--;
    }
    if(found)
    {
        printf("palindrome");
    }
    else
    {
        printf("not a palindrome");
    }
}
