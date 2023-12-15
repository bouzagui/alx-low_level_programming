#include <stdio.h>

/**
 * main - Entry point.
 * Descriction: function to be print alphabet lowercase and uppercase
*/
int main(void)
{
	int alpl = 97;
	int alpu = 65;

	while (alpl <= 122)
	{
		putchar(alpl);
		alpl++;
	}
	while (alpu <= 90)
	{
		putchar(alpu);
		alpu++;
	}
	putchar('\n');

	return (0);
}