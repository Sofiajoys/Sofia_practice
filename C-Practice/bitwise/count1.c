#include<stdio.h>
int main()
{
    int n,count=0;
    printf("enter a num: ");
    scanf("%d",&n);
    for(int i=0;i<31;i++)
    {
        if((n&(1<<i))==1)
        {
        count++;
    }
}
printf("%d",count);
}