#include<stdio.h>
int main()
{
    FILE* fp;
    char data[50];
    fp=fopen("file.txt","r");
    fgets(data,50,fp);
    printf("%s",data);
}