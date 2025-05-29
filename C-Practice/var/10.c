#include<stdio.h>
int main()
{
    static int x=5;
    fun(x);
}
fun(int x)
{
    x=10;
    printf("%d",x);
}