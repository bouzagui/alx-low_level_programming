#include "main.h"

#define BUF_SIZE 1024
/**
 * print_error - print an error message.
 * @message: the error message.
 * @arg: the argument to print.
 * @exit_code: the exit code of the print.
*/
void print_error(const char *message, const char *arg, int exit_code)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(exit_code);
}
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
		print_error("Error: Can't read from file %s\n", file_from, 98);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		print_error("Error: Can't write to %s\n", file_to, 99);
	}

	while ((bytes_read = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buf, bytes_read);
		if (bytes_written == -1)
		{
			close(fd_from);
			close(fd_to);
			print_error("Error: Can't write to %s\n", file_to, 99);
		}
	}

	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		print_error("Error: Can't read from file %s\n", file_from, 98);
	}

	if (close(fd_from) == -1)
	{
		print_error("Error: Can't close fd %d\n", fd_from, 100);
	}

	if (close(fd_to) == -1)
	{
		print_error("Error: Can't close fd %d\n", fd_to, 100);
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
		print_error("Usage: cp file_from file_to\n", "", 97);
	}

	copy_file(argv[1], argv[2]);

	return 0;
}
