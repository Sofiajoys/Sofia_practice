#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    p=malloc(5* sizeof(int));
    int a[5]={10,20,30,40,50};
    for(int i=0;i<5;i++)
    {
    printf("%d\n",*(a+i));
    }
    free(p);
    p!=NULL;
    return 0;
}