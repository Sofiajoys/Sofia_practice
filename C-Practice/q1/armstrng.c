#include<stdio.h>
#include<math.h>
int count(int n)
{
    int rem,count=0;
    while(n!=0){
    rem=n%10;
    count++;
    n=n/10;
    }
    return count;
}
int main()
{
    int n,arm,rem,c;
    printf("enter value of n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
    int num=i;
    arm=0;
    c=count(num);
    while(num){
        rem=num%10;
        num=num/10;
        arm+=pow(rem,c);
    }
    if(arm==i)
    printf("%d ",i);
    }
}