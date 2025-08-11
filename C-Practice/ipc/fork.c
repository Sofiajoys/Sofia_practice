#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
    pid_t pid;

    pid = fork();  

    if (pid < 0) {
        // fork failed
        perror("Fork failed");
        return 1;
    }
    else if (pid == 0) {
        // Child process
        printf("Child Process:\n");
        printf("Child PID: %d\n", getpid());
        printf("Parent PID (from child): %d\n", getppid());
    }
    else {
        // Parent process
        printf("Parent Process:\n");
        printf("Parent PID: %d\n", getpid());
        printf("Child PID (from parent): %d\n", pid);
    }

    return 0;
}
