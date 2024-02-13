#include "main.h"

#define BUF_SIZE 1024

/**
 * copy_file - copy a file to a new location.
 * @file_from: the file to copy from the location.
 * @file_to: the location to copy.
*/
void copy_file(const char *file_from, const char *file_to)
{
    int fd_from, fd_to;
    ssize_t bytes_read, bytes_written;
    char buf[BUF_SIZE];

    fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        exit(98);
    }
    fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1)
    {
        close(fd_from);
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
        exit(99);
    }
    while ((bytes_read = read(fd_from, buf, BUF_SIZE)) > 0)
    {
        bytes_written = write(fd_to, buf, bytes_read);
        if (bytes_written == -1)
        {
            close(fd_from);
            close(fd_to);
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
            exit(99);
        }
    }
    if (bytes_read == -1)
    {
        close(fd_from);
        close(fd_to);
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        exit(98);
    }
    if (close(fd_from) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
        exit(100);
    }
    if (close(fd_to) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
        exit(100);
    }
}

/**
 * main - main function
 * @argc: number of arguments.
 * @argv: command line arguments.
 * Return: 0 on success.
*/
int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    copy_file(argv[1], argv[2]);

    return 0;
}