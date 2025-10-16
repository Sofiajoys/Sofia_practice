#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

int main() {
    const char *fifo = "/pipe/myfifo";

    // Create FIFO (ignore error if it already exists)
    mkfifo(fifo, 0666);

    // Open FIFO for writing
    int fd = open(fifo, O_WRONLY);
    if (fd == -1) {
        perror("open");
        return 1;
    }

    // Write a simple message
    write(fd, "Hello FIFO!\n", 12);

    // Close FIFO
    close(fd);

    printf("Message written to FIFO\n");

    return 0;
}

