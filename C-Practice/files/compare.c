#include <stdio.h>

int main() {
    FILE *fp, *fs;
    int c1, c2;

    fp = fopen("data.txt", "r");
    fs = fopen("file.txt", "r");

    while (1) {
        c1 = fgetc(fp);
        c2 = fgetc(fs);

        if (c1 == EOF || c2 == EOF)
            break;

        if (c1 != c2) {
            printf("files are not equal\n");
            fclose(fp);
            fclose(fs);
            return 0;
        }
    }
    if (c1 == c2) {
        printf("files are equal\n");
    } else {
        printf("files are not equal\n");
    }

    fclose(fp);
    fclose(fs);
    return 0;
}
