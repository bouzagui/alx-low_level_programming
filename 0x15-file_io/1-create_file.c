#include "main.h"
/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fp, len = 0;
	ssize_t written;

	if (filename == NULL)
	{
		return (-1);
	}
	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fp == -1)
	{
		return (-1);
	}
    if (text_content != NULL)
    {
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
    }
	
	close(fp);
	return (1);
}
