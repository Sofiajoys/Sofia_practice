#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        // Child process
        char *args[] = {"ls", "-l", "/", NULL};
        execv("/bin/ls", args);

        // If execv fails
        perror("execv failed");
    } else {
        // Parent process waits
        wait(NULL);
        printf("Child finished execution.\n");
    }

    return 0;
}

