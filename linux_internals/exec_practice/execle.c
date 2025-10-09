#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        char *envp[] = {"MYVAR=Hello World", NULL};
        execle("/usr/bin/env", "env", NULL, envp);
        perror("execle failed");
    } else {
        wait(NULL);
        printf("Parent: env finished\n");
    }

    return 0;
}

