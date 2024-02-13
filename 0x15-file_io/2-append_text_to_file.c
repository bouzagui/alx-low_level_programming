#include "main.h"
/**
 * append_text_to_file - append a text file to the specified.
 * @filename: the filename to append.
 * @text_content: the text to append.
 * Return: the string to append to the specified.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t written;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}

		written = write(fd, text_content, len);
		if (written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
