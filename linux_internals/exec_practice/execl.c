#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        // Child process
        execl("/bin/ls", "ls", "-l", "/", NULL);

        // If execl fails
        perror("execl failed");
    } else {
        // Parent process waits for child
        wait(NULL);
        printf("Child finished execution.\n");
    }

    return 0;
}

