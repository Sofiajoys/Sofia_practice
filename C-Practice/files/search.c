#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp;
    char c[20];
    int found=0;
    fp=fopen("data.txt","r");
    if(fp==NULL)
    {
        printf("file not found");
        return 1;
    }
    while(fscanf(fp,"%s",c)!=EOF)
    {
        if(strcmp(c,"sofia")==0)
        {
            printf("found\n");
            fclose(fp);
            return 0;
        }
    }
    printf("not found\n");
    fclose(fp);
    return 0;
}