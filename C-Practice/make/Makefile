# Compiler and flags
CC = gcc
CFLAGS = -Wall -g

# Targets and dependencies
main: main.o add.o
	$(CC) $(CFLAGS) -o main main.o add.o

main.o: main.c add.h
	$(CC) $(CFLAGS) -c main.c

add.o: add.c add.h
	$(CC) $(CFLAGS) -c add.c

# Clean build files
clean:
	rm -f *.o main
