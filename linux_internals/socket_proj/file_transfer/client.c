#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define PORT 8080
#define SIZE 1024

void send_file(FILE *fp, int sockfd);

int main() {
    int sockfd;
    struct sockaddr_in server_addr;
    FILE *fp;
    char *filename = "send_file.txt";

    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0) {
        perror("Socket error");
        exit(1);
    }
    printf("[+]Client socket created.\n");

    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(PORT);
    server_addr.sin_addr.s_addr = inet_addr("192.168.68.133");  // Replace with server IP

    if (connect(sockfd, (struct sockaddr*)&server_addr, sizeof(server_addr)) < 0) {
        perror("Connect error");
        exit(1);
    }
    printf("[+]Connected to server.\n");

    fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("File open error");
        exit(1);
    }

    send_file(fp, sockfd);
    printf("[+]File data sent successfully.\n");

    close(sockfd);
    printf("[+]Disconnected from server.\n");

    return 0;
}

void send_file(FILE *fp, int sockfd) {
    char data[SIZE] = {0};
    while (fgets(data, SIZE, fp) != NULL) {
        if (send(sockfd, data, strlen(data), 0) == -1) {
            perror("Send error");
            exit(1);
        }
        bzero(data, SIZE);
    }
}

