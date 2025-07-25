#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t pid = fork();

    if (pid > 0) exit(0); // Parent exits

    setsid();             // Start new session
    chdir("/");           // Change working dir
    umask(0);             // Reset file mode mask

    while (1) {
        sleep(10);
    }

    return 0;
}
