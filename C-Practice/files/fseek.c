#include<stdio.h>
int main()
{
    FILE* fp;
    char data[50]="hello world";
    fp=fopen("data.txt","w");
    if(fp == NULL)
    {
        printf("file is not opened");
    }
    else{
        printf("file is now opened");
        fputs(data,fp);
        fputs("\n",fp);
        fseek(fp,12,SEEK_SET);
        fputs("sofia joys",fp);
        fclose(fp);
        
    }
}