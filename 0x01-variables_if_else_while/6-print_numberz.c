#include <stdio.h>

/**
 * main - Entry point.
 * Description: function to be printed numbers with ASCII.
 *
 * Return: Always 0.
*/
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}