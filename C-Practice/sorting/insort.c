#include<stdio.h>
void insert(int a[],int n)
{
    int temp,key;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            key = a[i];
            if(key>a[j])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
}
int main()
{
    int n;
    printf("enter no of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("enter an array:");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    insert(a,n);
    printf("the sorted array is: ");
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
}