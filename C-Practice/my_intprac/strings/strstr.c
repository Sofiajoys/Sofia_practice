#include<stdio.h>
int main()
{
    char str1[20]="good morning";
    char str2[20]="morning";
    for(int i=0;str1[i]!='\0';i++)
    {
        int found=1;
        for(int j=0;str2[j]!='\0';j++)
        {
            if(str1[i+j]!=str2[j])
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