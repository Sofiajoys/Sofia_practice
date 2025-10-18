#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

int main() {
    const char *fifo = "/tmp/myfifo";
    mkfifo(fifo, 0666);  // create FIFO if not exists

    int fd = open(fifo, O_WRONLY);
    write(fd, "Hello from writer!", 18);
    close(fd);

    printf("Message written to FIFO.\n");
    return 0;
}

