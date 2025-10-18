#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

int main() {
    const char *fifo = "/tmp/fifo1";   // FIFO path

    // Create the FIFO (if it doesn’t already exist)
    mkfifo(fifo, 0666);

    // Open FIFO for writing
    int fd = open(fifo, O_WRONLY);
    write(fd, "Hello FIFO!", 12);
    close(fd);
    printf("Message written to FIFO.\n");

    // Open FIFO for reading
    fd = open(fifo, O_RDONLY);
    char buffer[50];
    read(fd, buffer, sizeof(buffer));
    printf("Message read from FIFO: %s\n", buffer);
    close(fd);

    return 0;
}

