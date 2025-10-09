#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        char *args[] = {"echo", "Hello from execve!", NULL};
        char *envp[] = {NULL}; // inherit default environment
        execve("/bin/echo", args, envp);
        perror("execve failed");
    } else {
        wait(NULL);
        printf("Parent: execve echo finished\n");
    }

    return 0;
}

