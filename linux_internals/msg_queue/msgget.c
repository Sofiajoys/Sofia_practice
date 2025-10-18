#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>

int main() {
    key_t key = ftok("msgfile", 65);       // generate unique key
    int msgid = msgget(key, 0666 | IPC_CREAT);  // create message queue

    if (msgid == -1) {
        perror("msgget");
        return 1;
    }

    printf("Message queue created successfully. ID = %d\n", msgid);
    return 0;
}

