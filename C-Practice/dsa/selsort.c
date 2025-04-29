#include<stdio.h>
void selectionsort(int a[],int n)
{
    int midx,temp,nidx;
    for(int i=0;i<=n-1;i++)
    {
        midx=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[midx])
            {
                midx=j;
            }
        }
        temp=a[i];
        a[i]=a[midx];
        a[midx]=temp;
    }
}
int main()
{
    int a[5]={5,2,9,6,4};
    int n=5;
    selectionsort(a,n);
    for(int i=0;i<=n-1;i++)
    printf("%d ",a[i]);
}