#include<stdio.h>
int main()
{
    int n,j,count=1,i,num;
    printf("enter a num:");
    scanf("%d",&n);
    printf("the factors are:\n");
    for(int j=1;j<=n;j++){
    for(int i=1;i<=n;i++)
    {
        if(i*j==n) 
        printf(" %d ",j);
    }
}
    

}