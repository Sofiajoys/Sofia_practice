#include<stdio.h>
int main()
{
    int arr[5];
    printf("enter elements in array: ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    int p,found=0;
    printf("enter a element to search: ");
    scanf("%d",&p);
    for(int i=0;i<5;i++)
    {
        if(arr[i]==p)
        {
            printf("%d is found at pos %d",p,i);
            found=1;
            break;
        }
    }
    if(!found)
    {
        printf("not found\n");
    }
}