#include<stdio.h>
#define three 3
int add(int p,int q)
{
    int r;
    r = p+q;
    return r;
}

int main()
{
    int a=2,b=three,c;
    //add
    c = add(a,b);
    printf("addition: %d\n",c);
}

