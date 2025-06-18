#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p = calloc(5, sizeof(int));
    int a[5]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        printf("%d\n",*(a+i));
    }

}