#include<stdio.h>
int main()
{
    int n,i;
    int a[5];
    printf("enter the elements: ");
    for(int i=0;i<5;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
        if(a[i]<a[j])
        {
            n=a[i];
            a[i]=a[j];
            a[j]=n;
        }
    }
    }
    for(int i=0;i<5;i++)
    printf("%d ",a[i]);
}