#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

int main() {
    const char *fifo = "/tmp/myfifo";  // same name used in writer

    // Create the FIFO (ignore error if it already exists)
    mkfifo(fifo, 0666);

    printf("Opening FIFO for reading...\n");

    int fd = open(fifo, O_RDONLY);
    if (fd == -1) {
        perror("open");
        return 1;
    }

    char buffer[100];
    int bytes = read(fd, buffer, sizeof(buffer) - 1);

    if (bytes > 0) {
        buffer[bytes] = '\0'; // null-terminate string
        printf("Received: %s\n", buffer);
    } else {
        printf("No data received or pipe closed.\n");
    }

    close(fd);
    printf("FIFO closed.\n");
    return 0;
}

