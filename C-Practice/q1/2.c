#include<stdio.h>
int main()
{
    int a,b,avg,sum;
    printf("enter 2 num:");
    scanf("%d%d",&a,&b);
    sum = a+b;
    printf("sum is:%d\n",sum);
    avg = sum/2;
    printf("avg is:%d",avg);
    return 0;
}