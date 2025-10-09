#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#define GPIO "/sys/class/gpio/gpio4/value"

int main() {
    int fd = open(GPIO, O_WRONLY);
    if(fd < 0) {
        perror("GPIO open");
        return -1;
    }

    while(1) {
        write(fd, "1", 1);  // LED ON
        usleep(500000);     // 500ms delay
        write(fd, "0", 1);  // LED OFF
        usleep(500000);     // 500ms delay
    }

    close(fd);
    return 0;
}
