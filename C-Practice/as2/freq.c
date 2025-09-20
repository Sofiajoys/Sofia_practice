#include<stdio.h>
int main()
{
int n=1234321,count=0;
for(int i=0;i<n;i++)
{
    for(int j=1;j<n-1;j++)
    {
        if(i == j)
        {
            count++;
        }
    }
}
printf("freq: %d",count);
}