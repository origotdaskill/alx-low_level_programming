#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdarg.h>

#define BUFFER_SIZE 1024

void error_exit(int code, const char *message, ...);

int main(int argc, char *argv[])
{
    int fd_from, fd_to;
    ssize_t n_read, n_written;
    char buffer[BUFFER_SIZE];

    if (argc != 3)
        error_exit(97, "Usage: cp file_from file_to\n");

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
        error_exit(98, "Error: Can't read from file %s\n", argv[1]);

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
    if (fd_to == -1)
        error_exit(99, "Error: Can't write to %s\n", argv[2]);

    while ((n_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
    {
        n_written = write(fd_to, buffer, n_read);
        if (n_written == -1)
            error_exit(99, "Error: Can't write to %s\n", argv[2]);
    }

    if (n_read == -1)
        error_exit(98, "Error: Can't read from file %s\n", argv[1]);

    if (close(fd_from) == -1)
        error_exit(100, "Error: Can't close fd %d\n", fd_from);

    if (close(fd_to) == -1)
        error_exit(100, "Error: Can't close fd %d\n", fd_to);

    return 0;
}

void error_exit(int code, const char *message, ...)
{
    va_list args;
    va_start(args, message);
    dprintf(STDERR_FILENO, message, args);
    va_end(args);
    exit(code);
}

