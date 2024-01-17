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
	int i, j = 0, c = 0;
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

	ptr = malloc((len + ac) * sizeof(char) + 1);
	if (ptr == NULL)
	{
		exit(0);
	}

	i = 0;

	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			ptr[c++] = av[i][j++];
		}
		ptr[c++] = '\n';
		i++;
	}
	ptr[c] = '\0';

	return (ptr);
}
