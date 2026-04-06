#include <stdlib.h>
#include <stdio.h>

int main() {
    int *p = malloc(5 * sizeof(int));
    if (p == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {  // ✅ correct bounds
        p[i] = i;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", p[i]);
    }

    free(p);  // ✅ free allocated memory
    return 0;
}
