#include<stdio.h>
void bubsort(int a[],int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                //swap
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
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
    bubsort(a,n);
    printf("the sorted array is: ");
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
}