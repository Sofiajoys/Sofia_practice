#include <stdio.h>
volatile int flag = 0;
int main() {
    printf("Start\n");
    flag = 1;
    while (flag == 0) {
        // waiting
    }

    printf("Flag is changed!\n");
    return 0;
}
