#include <stdio.h>

void modify(int *x) {
    *x = *x + 10;
}

int main() {
    int a = 5;
    modify(&a);  // Pass address of a
    printf("a = %d\n", a);  // Output: a = 15
    return 0;
}
