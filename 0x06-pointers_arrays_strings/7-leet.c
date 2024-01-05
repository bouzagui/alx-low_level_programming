#include "main.h"
/**
 * leet - Function to encodes a string into eleet.
 * @str: The string to be encoded
 * Return: The encoded string.
*/
char *leet(char *str)
{
	char alf[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int leetnum[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i = 0, j;

	while (str[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == alf[j])
			{
				str[i] = leetnum[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
