#include<stdio.h>
int main()
{
    FILE* fp;
    int c1,count=0,fact=0;
    fp=fopen("data.txt","r");
    for(c1=fgetc(fp);c1 != EOF;c1=fgetc(fp))
    {
        if((c1>='A'&& c1<='Z')||(c1>='a' && c1<='z'))
        {
            count++;
        }
        else if(c1 >= '0' && c1 <= '9')
        {
            fact++;
        }
    }
    printf("no of char are: %d\n",count);
    printf("integers are : %d\n",fact);
}