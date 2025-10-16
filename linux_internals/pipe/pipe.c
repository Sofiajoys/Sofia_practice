#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main() {
    int fd[2];
    pipe(fd);

    if (fork() == 0) {
        // Child: Read
        close(fd[1]);
        char buf[50];
        read(fd[0], buf, sizeof(buf));
        printf("Child received: %s\n", buf);
    } else {
        // Parent: write
        close(fd[0]);
        char msg[] = "Hello ";
        write(fd[1], msg, strlen(msg)+1);
    }
}

