// fwr.c - Write to FIFO
#include <stdio.h>
#include <fcntl.h>   // for open
#include <unistd.h>  // for write

int main() {
    int fd = open("hello", O_WRONLY); 
    if (fd < 0) {
        perror("Failed to open FIFO for writing");
        return 1;
    }

    char *message = "hello";
    write(fd, message, 6);
    printf("Data written to FIFO.\n");

    close(fd);
    return 0;
}
