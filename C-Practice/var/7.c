#include<stdio.h>
int main()
{
   int x=5;
   fun(x);
   printf("%d",x);
}
fun(int x)
{
    x=10;
    return x;
}