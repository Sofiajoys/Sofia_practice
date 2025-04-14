#include<stdio.h>
int main()
{
    int res,a,b;
    printf("enter values of a and b");
    scanf("%d %d",&a,&b);
    res=(a<b)?a:b;
    res=a;
    while(res>0){
        if(a%res==0&&b%res==0){
            break;
        }
        res--;
    }
    printf("hcf of a and b is %d",res);

}