#include <stdio.h>

/**
 * main - Entry point.
 * Discription: Function to be printed lowercase alphabet in reverse.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
