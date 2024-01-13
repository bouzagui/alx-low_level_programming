#include "main.h"

/**
 * *_strspn - Calculates the length of the initial segment of 's'
 * @s: The string to search
 * @accept: The string containing allowed characters
 * Return: Length of the initial segment of 's' consisting only of characters
 * in 'accept'
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0;
	unsigned int length = 0;
	int found;

	while (s[i] != '\0')
	{
		found = 0;
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
			j++;
		}
		if (!found)
		{
			break;
		}
		length++;
		i++;
	}
	return (length);
}
