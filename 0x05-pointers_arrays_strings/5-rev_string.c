#include "main.h"
/**
 * rev_string - reverse a string.
 * @s: the string to reverse
 * Return: nothing.
*/
void rev_string(char *s)
{
	int i = 0, j = 0;
	char tmp;

	while (s[i++])
	{
		j++;
	}
	i = j - 1;
	while (i >= j / 2)
	{
		tmp = s[i];
		s[i] = s[j - i - 1];
		s[j - i - 1] = tmp;
		i--;
	}
}
