#include<stdio.h>
#include<string.h>
void rev(char *start,char *end)
{
    if(start>=end)
        return;
    
    char temp=*start;
    *start=*end;
    *end=temp;
    rev(start+1,end-1);
}
int main()
{
    char str1[20]="sofia";
    rev(str1,str1+strlen(str1)-1);
    printf("rev: %s",str1);

}