#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        // execlp searches PATH for "date"
        execlp("date", "date", NULL);
        perror("execlp failed");
    } else {
        wait(NULL);
        printf("Parent: date command finished\n");
    }

    return 0;
}

