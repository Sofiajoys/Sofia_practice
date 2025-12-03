#include<stdio.h>
int main()
{
    char str1[20];
    int ch,dig,sp;
    ch=dig=sp=0;
    printf("enter a str: ");
    fgets(str1,sizeof str1,stdin);
    for(int i=0;str1[i]!='\0';i++)
    {
        if(str1[i]>='a' && str1[i]<='z' || str1[i]>='A' && str1[i]<='Z')
        {
            ch++;
        }
        else if(str1[i]>='0' && str1[i]<='9')
        {
            dig++;
        }
        else if(str1[i]!='\n')
        {
            sp++;
        }
        
    }
    printf("no of alphabets: %d\n",ch);
    printf("no of digits: %d\n",dig);
    printf("no of sp char: %d\n",sp);
    
    
}