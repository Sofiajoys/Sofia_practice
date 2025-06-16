#include<stdio.h>
int main()
{
    FILE* fp;
    fp=fopen("data.txt","w");
    if(fp == NULL)
    {
        printf("file is not created");
    }
    else
    {
        printf("file is created");
    }
    return 0;
}