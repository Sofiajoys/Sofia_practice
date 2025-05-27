#include <stdio.h>

int findUnique(int arr[], int n) {
    int ones = 0, twos = 0, common_mask;

    for (int i = 0; i < n; i++) {
        twos = twos | (ones & arr[i]);
        ones = ones ^ arr[i];

        common_mask = ~(ones & twos);
        ones &= common_mask;
        twos &= common_mask;
    }
    return ones;
}

int main() {
    int arr[] = {3, 3, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Unique element is: %d\n", findUnique(arr, n));
    return 0;
}
