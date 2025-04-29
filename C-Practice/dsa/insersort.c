#include<stdio.h>
void insertionsort(int a[],int n)
{
    int key,temp;
    for(int i=1;i<n;i++)
    {
    key=a[i];
    for(int j=i-1;j>=0;j--){
    if(key<a[j])
    {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
    }
    //printf("%d %d\n",i,j);
    
    //printf("\n");
    
}
}
}
int main()
{
    int a[5]={9,5,1,4,3};
    int n=5;
    insertionsort(a,n);
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
}