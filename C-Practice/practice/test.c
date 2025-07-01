#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

#define GPIO_NUM "101"
#define GPIO_PATH "/sys/class/gpio/gpio101"

void write_file(const char *path, const char *value) {
    int fd = open(path, O_WRONLY);
    if (fd < 0) {
        perror(path);
        exit(EXIT_FAILURE);
    }
    write(fd, value, strlen(value));
    close(fd);
}

int main() {
    char path[64];

    // Export GPIO
    write_file("/sys/class/gpio/export", GPIO_NUM);
    usleep(100000); // Wait for GPIO sysfs entry to appear

    // Set direction
    snprintf(path, sizeof(path), "%s/direction", GPIO_PATH);
    write_file(path, "out");

    // Blink loop
    snprintf(path, sizeof(path), "%s/value", GPIO_PATH);
    for (int i = 0; i < 10; i++) {
        write_file(path, "1");
        sleep(1);
        write_file(path, "0");
        sleep(1);
    }

    // Unexport GPIO
    write_file("/sys/class/gpio/unexport", GPIO_NUM);

    return 0;
}



