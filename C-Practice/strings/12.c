#include<stdio.h>
int i=0;
int num()
{
    if(i<5)
    {
        printf("%d\n",i);
        i++;
        num();
    }
    
}
int main()
{
    num();
    return 0;
}