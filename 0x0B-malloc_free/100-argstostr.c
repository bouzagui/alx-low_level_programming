#include "main.h"
#include <string.h>

/**
 * argstostr - output string for argstost for command line parsing
 * @ac: command line arguments
 * @av: argument
 * Return: output string.
*/
char *argstostr(int ac, char **av)
{
	int i, j = 0;
	char *ptr;
	size_t len = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]);
	}

	ptr = malloc((len + ac) * sizeof(char));
	if (ptr == NULL)
	{
		exit(0);
	}

	i = 0;

	while (i < ac)
	{
		j = 0;
		while (ptr[j] != '\0')
		{
			ptr[i + j] = av[i][j];
			j++;
		}
		if (i < ac - 1)
		{
			ptr[i + j] = '\n';
            i += j + 1;
		}
	}
	ptr[i] = '\0';

	return (ptr);
}
