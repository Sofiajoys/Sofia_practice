#include <stdio.h>
#include <sys/stat.h>

int main(int argc, char *argv[]) {
    const char *path = (argc > 1) ? argv[1] : ".";  // default to current dir
    struct stat st;

    if (stat(path, &st) == -1) {
        perror("stat");
        return 1;
    }

    // Print type: d = directory, - = file
    printf( (st.st_mode & S_IFDIR) ? "d" : "-");

    // Simple permissions rwx for user/group/others
    printf( (st.st_mode & S_IRUSR) ? "r" : "-");
    printf( (st.st_mode & S_IWUSR) ? "w" : "-");
    printf( (st.st_mode & S_IXUSR) ? "x" : "-");
    printf( (st.st_mode & S_IRGRP) ? "r" : "-");
    printf( (st.st_mode & S_IWGRP) ? "w" : "-");
    printf( (st.st_mode & S_IXGRP) ? "x" : "-");
    printf( (st.st_mode & S_IROTH) ? "r" : "-");
    printf( (st.st_mode & S_IWOTH) ? "w" : "-");
    printf( (st.st_mode & S_IXOTH) ? "x" : "-");

    printf(" %5ld %s\n", st.st_size, path);
    return 0;
}

