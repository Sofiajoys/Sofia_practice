#include<stdio.h>
int main()
{
    int n=4,arr[5]={1,2,3,4,5},count=0;
    for(int i=0;i<5;i++)
    {
        if(arr[i]==n)
        {
            printf("%d found at position %d",n,i);
            count++;

        }
    }
    
    if(count!=1)
    {
        printf("not found");
    }

    return 0;
}