#include <stdio.h>

/**
 * main - Entry point.
 * Description: function to be printed alphabet except 'q' and 'e'.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
