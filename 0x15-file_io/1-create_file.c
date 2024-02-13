#include "main.h"
/**
 * create_file - create a file with the given name.
 * @filename: the name of the file to create.
 * @text_content: the content of the file to create.
 * Return: the newly created file.
*/
int create_file(const char *filename, char *text_content)
{
	int fp, len = 0;
	ssize_t written;

	(filename == NULL)
	{
		return (-1);
	}
	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fp == -1)
	{
		return (-1);
	}
	while (text_content[len] != '\0')
	{
    	len++;
	}
	written = write(fp, text_content, len);
	if (written == -1)
	{
		close(fp);
		return (-1);
	}
	close(fp);
	return (1);
}
