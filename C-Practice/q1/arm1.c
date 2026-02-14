#include<stdio.h>
#include<math.h>
int main()
{
    int n,num,rem;
    printf("enter a no of digits: ");
    scanf("%d",&n);
    printf("enter num: ");
    scanf("%d",&num);
    int arm=0;
    int b=num;
    while(num!=0)
    {
        rem=num%10;
        num=num/10;
        arm+=(int)pow(rem,n);
    }
    if(b==arm)
    {
        printf("it is a armstrong\n");
    }
    else 
    {
        printf("not armstrong");
    }
}