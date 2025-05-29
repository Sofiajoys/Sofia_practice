#include<stdio.h>
int main()
{
    int x=10;
    fun(x);
    printf("%d",x);

}
fun(int x)
{
    static int x=20;
    return x;
}