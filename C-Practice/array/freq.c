#include<stdio.h>
int main()
{
    int arr1[5],count=0,i;
    printf("enter array 1: ");
    for(int i=0;i<5;i++)
    scanf("%d",&arr1[i]);
    printf("freq is :");
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
        if(arr1[i]==arr1[j])
        count++;
        
        printf("%d occurs %d times\n",arr1[i],count);
    }
}
    return 0;
}