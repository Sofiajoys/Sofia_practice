#include<stdio.h>
int main()
{
    FILE *fs,*fp;
    int c1;
    fp=fopen("data.txt","r");
    fs=fopen("file.txt","a+");
    while((c1=fgetc(fp))!=EOF)
    {
        fputc(c1,fs);
    }
    fclose(fp);
    fclose(fs);
    return 0;
}