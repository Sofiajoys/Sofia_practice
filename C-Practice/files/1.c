#include<stdio.h>
int main()
{
    FILE* fp;
    char data[50]="good morning";
    fp=fopen("file.txt","w");
    if(fp == NULL)
    {
        printf("file is not opened");
    }
    else
    {
        printf("file is now created");
        fp=fopen("file.txt","w");
        fputs(data,fp);
        fclose(fp);
    }
}