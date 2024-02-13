#include "main.h"
/**
 * read_textfile - read a text file from the specified directory.
 * @filename: the name of the file to read.
 * @letters: the number of characters to read.
 * Return: rotal number of characters read.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	char *buffer;
	ssize_t written;
	ssize_t bytes_read;

	if (filename == NULL)
	{
		return (0);
	}

	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		close(fp);
		return (0);
	}
	bytes_read = read(fp, buffer, letters);
    if (bytes_read == -1)
	{    
		close(fp);
		free(buffer);
		return (0);
	}
	written = write(STDOUT_FILENO, buffer, bytes_read);
	if (written == -1)
	{
		close(fp);
		free(buffer);
		return (0);
	}
	close(fp);
	free(buffer);
	return (bytes_read);
}
