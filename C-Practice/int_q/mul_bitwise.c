#include<stdio.h>
int mul(int a,int b)
{
    int result=0;
while(b>0)
{
    if(b&1)
    {
        result+=a;
    }
    a<<=1;
    b>>=1;
}
return result;
}
int main()
{
    int x,y;
    printf("enter two numbers: ");
    scanf("%d %d",&x,&y);
    printf("mul: %d",mul(x,y));
    return 0;
}
