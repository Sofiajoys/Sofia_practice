#include<stdio.h>
int main()
{
    FILE* fp;
    char data[50]="\nsofia joys";
    fp=fopen("data.txt","a");
    fputs(data,fp);
    fclose(fp);
    printf("data is appended");

}