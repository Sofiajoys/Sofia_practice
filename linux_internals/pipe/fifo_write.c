#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

int main() {
    const char *fifo = "/tmp/myfifo";  // same path as reader

    // Create the FIFO (ignore error if it already exists)
    mkfifo(fifo, 0666);

    printf("Opening FIFO for writing...\n");

    int fd = open(fifo, O_WRONLY);
    if (fd == -1) {
        perror("open");
        return 1;
    }

    // Message to send
    const char *msg = "Hello FIFO!";
    write(fd, msg, sizeof("Hello FIFO!"));

    close(fd);
    printf("Message written to FIFO.\n");
    return 0;
}

