#include<stdio.h>
int main()
{
    FILE* fp;
    char data[50]="good morning";
    fp=fopen("data.txt","r+");
    fputs(data,fp);
    fclose(fp);
    printf("data is entered");

}
