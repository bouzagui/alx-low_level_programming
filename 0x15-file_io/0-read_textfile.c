#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
    int fp;
    char *buffer;
    ssize_t len, bytes_read, total_bytes_read = 0;

    if (filename == NULL)
    {
        return (0);
    }

    fp = open(filename, O_RDONLY);
    if (fp == -1)
    {
        return (0);
    }

    buffer = malloc(sizeof(char) * letters);
    if (buffer == NULL)
    {
        close(fp);
        return (0);
    }
    
    while ((bytes_read = read(fp, buffer, letters)) > 0)
    {
        len = write(STDOUT_FILENO, buffer, bytes_read);
        if (len == -1)
        {
            close(fp);
            free(buffer);
            return (0);
        }
        total_bytes_read += bytes_read;
    }
    if (bytes_read == -1)
    {
        close(fp);
        free(buffer);
        return (0);
    }

    close(fp);
    free(buffer);
    return (total_bytes_read);
}
