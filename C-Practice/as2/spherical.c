#include <stdio.h>
int main()
{
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);

    // Upper half (1 to n)
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }

    // Repeat the middle row 3 more times (total = 4)
    for (int repeat = 1; repeat <= 3; repeat++) {
        for (int j = 1; j <= n - n; j++) {
            printf(" ");
        }
        for (int k = 1; k <= n; k++) {
            printf("* ");
        }
        printf("\n");
    }

    // Lower half (n-1 down to 1)
    for (int i = n - 1; i > 0; i--) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
