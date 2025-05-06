#include <stdio.h>
#include <math.h>

int largestPowerOf2(int n) {
    int x = 0;
    while ((1 << x) <= n) x++;
    return x - 1;
}

int countSetBits(int n) {
    if (n == 0) return 0;

    int x = largestPowerOf2(n);
    int bitsUpto2x = x * (1 << (x - 1));
    int msbBits = n - (1 << x) + 1;
    int rest = countSetBits(n - (1 << x));

    return bitsUpto2x + msbBits + rest;
}

int main() {
    int n = 17;
    printf("Total set bits from 1 to %d is: %d\n", n, countSetBits(n));
    return 0;
}
