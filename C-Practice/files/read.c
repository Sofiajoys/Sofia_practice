#include<stdio.h>
int main()
{
    FILE* fp;
    char data[50]="Good evening";
    fp=fopen("data.txt","w+");
    fputs(data,fp);
    printf("data is entered");
}