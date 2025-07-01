#include<stdio.h>
int main()
{
    FILE* fp;
    char data[50]="sofia joys";
    fp=fopen("data.txt","w+");
    fputs(data,fp);
    fclose(fp);
    printf("data is entered");

}