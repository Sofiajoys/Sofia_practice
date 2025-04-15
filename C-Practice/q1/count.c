#include<stdio.h>
int main()
{
    int count=0,n,rem;
    printf("enter a number");
    scanf("%d",&n);
    while(n!=0){
    rem=n%10;
    n=n/10;
    count++;
    }
    printf("%d",count);
    return 0;

}