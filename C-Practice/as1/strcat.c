#include<stdio.h>
void mystrcat(char dst[],const char src[])
{
    int i=0,j=0;
    while(dst[i]!='\0')
    {
        i++;
    }

    while(src[j]!='\0')
    {
        dst[i]=src[j];
        i++;
        j++;
    }
    dst[i]='\0';
}
    int main()
    {
        char str1[20],str2[20];
        printf("enter a string 1:");
        scanf("%s",str1);
        printf("enter a string 2:");
        scanf("%s",str2);
        mystrcat(str1,str2);
        printf("The concatenated string is : %s",str1);

    }
