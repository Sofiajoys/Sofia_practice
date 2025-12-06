#include<stdio.h>
volatile int flag=0;
int main()
{
    printf("start\n");
    flag=1;
    while(flag==0)
    {
        //wait
    }
    printf("flag is changed %d",flag);
}