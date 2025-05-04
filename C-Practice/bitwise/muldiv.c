#include<stdio.h>
int main()
{
    int n,mul,div;
    printf("enter a num: ");
    scanf("%d",&n);
    mul=(n<<2);
    div=(n>>2);
    printf("mul is: %d\n",mul);
    printf("div is: %d",div);
}