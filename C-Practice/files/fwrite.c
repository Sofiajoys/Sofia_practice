#include<stdio.h>
int main()
{
    FILE* fp;
    char data[50] = "hello world\ngood morning";
    fp=fopen("data.txt","w");
    if(fp == NULL)
    {
        printf("file is not opened\n");
    }
    else
    {
        printf("file is opened\n");
        fputs(data,fp);
        fclose(fp);
        printf("data written in file\n");
        printf("file is closed\n");
    }
    return 0;
}