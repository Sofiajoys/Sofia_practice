#include<stdio.h>
int main()
{
    int arr[100],count,n,i;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter an array:");
    for(int i=0;i<n;i++)
       scanf("%d",&arr[i]);
    for(int i=0;i<n;i++)
    {
        count=0;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j])
               count++;
    }
      if(count%2==0 && count!=0)
        printf("%d is odd times\n",arr[i]);
    }    
    return 0;
}