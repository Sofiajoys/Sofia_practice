#include<stdio.h>
void bubblesort(int a[],int n)
{
    int temp;
    for(int i=0;i<=n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
}
int main(void)
{
    int a[6]={3,2,7,1,6,9},n=6;
    bubblesort(a,n);
    printf("after sorting: ");
    for(int i=0;i<=n-1;i++)
    printf("%d ",a[i]);

}