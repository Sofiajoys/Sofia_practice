#include <stdio.h>

int main(int argc, char *argv[]) {
    // If no arguments are given, just print a newline (like normal echo)
        if (argc == 0) {
        printf("\n");
        return 0;
    }

    // Loop through each argument starting from argv[1]
    for (int i = 1; i < argc; i++) {
        printf("%s", argv[i]); // print the word
        if (i < argc - 1)
            printf(" "); // print space between words
    }

    printf("\n"); // print newline at the end
    return 0;
}

