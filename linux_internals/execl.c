#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        // Child process runs "ls -l"
        execl("/bin/ls", "ls", "-l", NULL);
        perror("execl failed"); 
    } else {
        // Parent waits for child
        wait(NULL);
        printf("Parent: ls command finished\n");
    }

    return 0;
}

