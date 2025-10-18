#include <stdio.h>
#include <unistd.h>

int main() {
    int fd[2];
    char msg[] = "Hello from Parent!";
    char buffer[50];
    pipe(fd);   // create pipe

    pid_t pid = fork();   // create child process

    if (pid > 0) {  // Parent process
        close(fd[0]);              // close read end
        write(fd[1], msg, sizeof(msg));
        close(fd[1]);              // close write end
        printf("Parent sent message: %s\n", msg);
    } 
    else {          // Child process
        close(fd[1]);              // close write end
        read(fd[0], buffer, sizeof(buffer));
        close(fd[0]);              // close read end
        printf("Child received message: %s\n", buffer);
    }

    return 0;
}

