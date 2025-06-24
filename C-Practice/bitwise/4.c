#include <stdio.h>

int main() {
    unsigned int n;
    printf("Enter a number: ");
    scanf("%u", &n); 

    if (n == 0)
        printf("Leading zeros: 32\n"); 
    else
        printf("Leading zeros: %d\n", __builtin_clz(n));

    return 0;
}
