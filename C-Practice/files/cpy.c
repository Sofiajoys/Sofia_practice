#include<stdio.h>
int main()
{
    FILE *fp;
    FILE *fs;
    int c;
    fp=fopen("data.txt","r");
    fs=fopen("file.txt","w");
    for(c=fgetc(fp);c!=EOF;c=fgetc(fp))
    {
        fputc(c,fs);
    }
    fclose(fp);
    fclose(fs);
    printf("file is copied\n");
}