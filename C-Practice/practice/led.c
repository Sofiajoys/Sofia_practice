clude <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

#define LED_BRIGHTNESS "/sys/class/leds/user_led/brightness"
#define LED_TRIGGER    "/sys/class/leds/user_led/trigger"

void set_trigger_none() {
    int fd = open(LED_TRIGGER, O_WRONLY);
    if (fd < 0) {
        perror("Error opening trigger file");
        exit(EXIT_FAILURE);
    }

    if (write(fd, "none", 4) < 0) {
        perror("Error writing to trigger file");
        close(fd);
        exit(EXIT_FAILURE);
    }

    close(fd);
}

void set_brightness(int value) {
    int fd = open(LED_BRIGHTNESS, O_WRONLY);
    if (fd < 0) {
        perror("Error opening brightness file");
        exit(EXIT_FAILURE);
    }

    char buffer[4];
    int len = snprintf(buffer, sizeof(buffer), "%d", value);
    if (write(fd, buffer, len) < 0) {
        perror("Error writing brightness");
    }

    close(fd);
}

int main() {
    set_trigger_none();  // Disable automatic LED triggers

    printf("Blinking LED using while loop. Press Ctrl+C to stop.\n");

    while (1) {
        set_brightness(255);  // LED ON
        sleep(1);             // 1-second delay

        set_brightness(0);    // LED OFF
        sleep(1);             // 1-second delay
    }

    return 0;
}

