#include<stdio.h>
int main()
{
    int arr[10],n=0,found=0;
    printf("enter elements in array: ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("missing element is found at");
    for(int i=0;i<10;i++)
    {
        while(n>=10)
        {
            n++;
            if(arr[i]!=n)
            {
                found=1;
                
                break;
            }
            if(found)
            {
                printf(" %d",i);
            }
        }
    }
}