#include<stdio.h>
int main()
{
    char str1[20]="my name is sofia";
    char str2[20]="name";
    char *p,*q;
    int found;
    p=str1;
    q=str2;
    while(*p!='\0')
    {
        found=1;
        while(*q!='\0')
        {
            if(*p!=*q)
            {
                found=1;
                break;
            }

        }
        if(found)
        {
            printf("%s found at %ld",str2,p-str1);
            return 0;
        }
    }
    printf("not found");
    return 0;
}