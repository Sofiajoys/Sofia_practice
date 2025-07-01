#include<stdio.h>
int main()
{
    FILE* fp;
    char data[50];
    fp=fopen("data.txt","r");
    if(fp == NULL)
    {
        printf("file is not opened\n");
    }
    else{
        printf("file is now opened\n");
        
        while(fgets(data,50,fp) != NULL)
        {
            printf("%s\n",data);
        }
        fclose(fp);
    }
}