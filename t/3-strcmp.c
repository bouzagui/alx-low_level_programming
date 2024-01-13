#include "main.h"
/**
 * _strcmp - Compares two strings
 * @s1: First string
 * @s2:Second string
 * Return: Difference between the ASCII values
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]; i++)
	{
	}
	return (s1[i] - s2[i]);
}
