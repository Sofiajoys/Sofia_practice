#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <pthread.h>

#define PORT 8080
#define SIZE 1024

int sockfd;

void *send_data(void *arg);
void *receive_data(void *arg);
void send_file(char *filename);
void receive_file();

int main() {
    struct sockaddr_in server_addr;
    pthread_t send_thread, recv_thread;

    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0) {
        perror("Socket error");
        exit(1);
    }

    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(PORT);
    server_addr.sin_addr.s_addr = inet_addr("192.168.68.133"); // change IP!

    if (connect(sockfd, (struct sockaddr*)&server_addr, sizeof(server_addr)) < 0) {
        perror("Connect error");
        exit(1);
    }

    printf("[+] Connected to server.\n");

    pthread_create(&send_thread, NULL, send_data, NULL);
    pthread_create(&recv_thread, NULL, receive_data, NULL);

    pthread_join(send_thread, NULL);
    pthread_join(recv_thread, NULL);

    close(sockfd);
    return 0;
}

void *send_data(void *arg) {
    char msg[SIZE];
    while (1) {
        bzero(msg, SIZE);
        fgets(msg, SIZE, stdin);

        if (strncmp(msg, "/send ", 6) == 0) {
            char filename[256];
            sscanf(msg + 6, "%s", filename);
            send(sockfd, "FILE", 4, 0);
            sleep(1);
            send_file(filename);
        } else {
            send(sockfd, msg, strlen(msg), 0);
        }

        if (strncmp(msg, "/exit", 5) == 0) {
            printf("[+] Closing chat.\n");
            break;
        }
    }
    return NULL;
}

void *receive_data(void *arg) {
    char buffer[SIZE];
    while (1) {
        bzero(buffer, SIZE);
        int n = recv(sockfd, buffer, SIZE, 0);
        if (n <= 0) break;

        if (strncmp(buffer, "FILE", 4) == 0) {
            receive_file();
        } else {
            printf("Server: %s", buffer);
        }
    }
    return NULL;
}

void send_file(char *filename) {
    FILE *fp = fopen(filename, "rb");
    if (!fp) {
        perror("File open error");
        send(sockfd, "ERR", 3, 0);
        return;
    }

    char data[SIZE];
    while (!feof(fp)) {
        int bytes = fread(data, 1, SIZE, fp);
        if (send(sockfd, data, bytes, 0) == -1) break;
    }
    fclose(fp);
    send(sockfd, "EOF", 3, 0);
    printf("[+] File %s sent successfully.\n", filename);
}

void receive_file() {
    char filename[256];
    sprintf(filename, "received_%ld", time(NULL));
    FILE *fp = fopen(filename, "wb");
    if (!fp) {
        perror("File receive error");
        return;
    }

    char buffer[SIZE];
    while (1) {
        int n = recv(sockfd, buffer, SIZE, 0);
        if (n <= 0 || (n == 3 && strncmp(buffer, "EOF", 3) == 0)) break;
        fwrite(buffer, 1, n, fp);
    }
    fclose(fp);
    printf("[+] File received and saved as %s\n", filename);
}
