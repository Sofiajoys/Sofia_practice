#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20];
    int a,b,count=0;
    printf("enter a str1: ");
    fgets(str1,sizeof str1,stdin);
    printf("enter a str2: ");
    fgets(str2,sizeof str2,stdin);
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
        printf("strings are equal");
    }
    else
    {
        printf("strings are not equal");
    }
}
else
printf("strings are not equal");

}