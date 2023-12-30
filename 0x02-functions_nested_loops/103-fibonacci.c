#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *			terms not exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
	int fic1 = 0, fic2 = 1, sum = 0;
	int count = 0;

	while (count <= 4000000)
	{
		if ((count % 2) == 0)
		{
			sum = sum + count;
		}
		count = fic1 + fic2;
		fic1 = fic2;
		fic2 = count;
	}
	printf("%u\n", sum);
}
