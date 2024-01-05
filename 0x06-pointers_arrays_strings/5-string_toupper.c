#include "main.h"

/**
 * string_toupper - Function to change all characters to upper case.
 * @str: String to be converted to upper case
 * Return: String to be converted.
*/
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
