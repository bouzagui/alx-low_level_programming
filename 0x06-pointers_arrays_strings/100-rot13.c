#include "main.h"
#include <stdio.h>

/**
 * rot13 - Function to be changed string to rot13.
 * @str: The string to be changed
 * Return: The new string.
*/
char *rot13(char *str)
{
	int i, j;
	char *alf = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == alf[j])
			{
				str[i] = rot[j];
				break;
			}
		}
	}
	return (str);
}
