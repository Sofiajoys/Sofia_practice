#include<stdio.h>
int main()
{
    int arr[3]={1,2,3};
    int (*ptr)[3]=&arr;
    for(int i=0;i<3;i++)
    {
        printf("%d ",(*ptr)[i]);
    }
}