#include<stdio.h>
int main()
{
    char s1[20]="hello world";
    char s2[20]="world";
    int found;
    for(int i=0;s1[i]!='\0';i++)
    {
        found=1;
        for(int j=0;s2[j]!='\0';j++)
        {
            if(s1[i+j]!=s2[j])
            {
                found=0;
                break;
            }
        }
        if(found==1)
        {
            printf("found at %d",i);
            return 0;
        }
    }
    printf("not found");
    return 0;
}