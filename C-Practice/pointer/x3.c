#include<stdio.h>
int main()
{
    int a[]={5,4,3,2,1};
    int *p=a;
    p++;
    printf("%d",*p);
}