#include<stdio.h>
int table(int a)
{
    for(int i=1;i<=12;i++)
    printf("%d * %d = %d\n",a,i,a*i);
    return 0;
}
int main()
{
    int a;
    printf("enter a num");
    scanf("%d",&a);
    table(a);
}