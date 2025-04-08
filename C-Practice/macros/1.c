#include<stdio.h>
#define MIN(a,b,c) ((a<b)&&(a<c)?a:((b<c)?b:c))
int main()
{
    MIN(4,5,6);
    printf("smallest number is %d",MIN(4,5,6));
    return 0;
}