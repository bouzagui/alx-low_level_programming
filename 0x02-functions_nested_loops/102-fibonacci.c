#include <stdio.h>

/**
 * main - Prints the Fibonacci of the first 50.
 *
 * Return: Always 0 on success.
*/
int main(void)
{
	long i, a = 0, b = 1, sum = 0;

	for (i = 0; i < 50; i++)
	{
			sum = a + b;
			a = b;
			b = sum;

			printf("%lu", b);
			if (i == 49)
			{
				printf("\n");
			}
			else
			{
				printf(", ");
			}
	}
	return (0);
}
