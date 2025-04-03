#include<stdio.h>
#include<string.h>
int main()
{
    int count,i,dig;
    char str1[20];
    printf("enter a string\n:");
    scanf("%s",str1);
    if(((str1[20]>=65)&&(str1[20]<=90))||((str1[20]>=97)&&(str1[20]<=122)))
    {
      count++;
      printf("no of alphabets are%d:",count);
    }
    elseif((str1[20]>='0') && (str1[20]>='9'))
    {
       dig++;
       printf("no of digits:%d",dig);
    }
    else{
       sp++;
       printf("special characters:%d",sp);
    }
    i++;
return 0;
}