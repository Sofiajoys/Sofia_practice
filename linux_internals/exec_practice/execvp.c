#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        char *args[] = {"echo", "Hello World!", NULL};
        execvp("echo", args);
        perror("execvp failed");
    } else {
        wait(NULL);
        printf("Parent: echo finished\n");
    }

    return 0;
}

