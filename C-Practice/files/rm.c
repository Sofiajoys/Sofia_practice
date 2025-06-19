#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp,*fs;
    char word[100];
    char target[20];
    fp=fopen("data.txt","r");
    fs=fopen("hello.txt","w+");
    printf("enter target word:");
    scanf("%s",target);
     while (fscanf(fp, "%s", word) != EOF) {
        if (strcmp(word, target) != 0) {
            fprintf(fs, "%s ", word);
        }
    }
    fclose(fp);
    fclose(fs);
    printf("character is removed:%s",target);
    return 0;

}