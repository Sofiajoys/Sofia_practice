#include<stdio.h>
int main()
{
    int *p1,*p2;
    int m,n,p;
    p1=&m;
    p2=&n;
    printf("enter a num: ");
    scanf("%d",&m);
    printf("enter a num: ");
    scanf("%d",&n);
    p=*p1+*p2;
    printf("%d",p);
}