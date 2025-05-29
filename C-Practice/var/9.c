#include<stdio.h>
int main()
{
    int x=10;
    fun(x);
}
fun(int x)
{
    x=55;
    printf("%d",x);
}