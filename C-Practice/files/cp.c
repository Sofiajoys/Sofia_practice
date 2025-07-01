#include<stdio.h>
int main()
{
    FILE *fs,*fp;
    int c1;
    fp=fopen("data.txt","r");
    fs=fopen("file.txt","w");
    for(c1=fgetc(fp);c1 != EOF;c1=fgetc(fp)){
    fputc(c1,fs);
    }
    fclose(fp);
    fclose(fs);
    printf("file is copied");
}