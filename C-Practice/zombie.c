#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();
    
    if (pid > 0) {
	    printf("parent pid: %d",getpid());
        sleep(10); 
        
    } else if (pid == 0) {
        printf("Child exiting...\n");
        _exit(0);
    }

    return 0;
}
