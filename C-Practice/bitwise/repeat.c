#include<stdio.h>
int main()
{
    int a[5]={2,4,4,6,2},b=0;
    for(int i=0;i<5;i++)
    {
        b^=a[i];
    }
    printf("non repeating element is: %d",b);
}