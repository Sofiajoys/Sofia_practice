#include<stdio.h>
int main()
{
    int n,i;
    printf("enter no of n");
    scanf("%d",&n);
    printf("even numbers are");
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
          printf(" %d ",i);
    }
    printf("\nodd num are: ");
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
          printf(" %d ",i);
    }
}
