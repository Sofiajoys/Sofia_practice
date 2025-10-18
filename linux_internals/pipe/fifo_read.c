#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

int main() {
    const char *fifo = "/tmp/myfifo";
    char buffer[100];

    int fd = open(fifo, O_RDONLY);
    read(fd, buffer, sizeof(buffer));
    close(fd);

    printf("Message read from FIFO: %s\n", buffer);
    return 0;
}


