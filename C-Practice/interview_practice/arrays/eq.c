#include <stdio.h>

int main()
{
    char str[] = "2-x=0";
    int x = 0;
    x = str[0] - '0';
    printf("x = %d\n", x);
    return 0;
}