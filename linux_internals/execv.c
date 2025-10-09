#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        char *args[] = {"ls", "-l", NULL};
        execv("/bin/ls", args);
        perror("execv failed");
    } else {
        wait(NULL);
        printf("Parent: ls -l finished\n");
    }

    return 0;
}

