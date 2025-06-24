#include<stdio.h>
int main()
{
    FILE* fp;
    fp=fopen("data.txt","r");
    if(fp == NULL)
    {
        printf("file is not opened");
    }
    else
    {
        
    }
}