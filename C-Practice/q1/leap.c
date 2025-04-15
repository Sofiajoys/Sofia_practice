#include<stdio.h>
int main()
{
    int n;
    printf("enter n value: ");
    scanf("%d",&n);
    printf("leap years are:\n");
    for(int i=1;i<=n;i++)
    {
        if(((i%4==0)&&(i%100!=0))||(((i%400)==0))){
        printf(" %d ",i);
        }
    }
    
}