#include <stdio.h>

/**
 * main - Prints the Fibonacci of the first 50.
 *
 * Return: Always 0 on success.
*/
int main(void)
{
	long a = 0, b = 1, sum = 0;
	int i = 0;

	while (i <= 49)
	{
			sum = a + b;
			printf("%lu", b);

			a = b;
			b = sum;

			if (i == 49)
			{
				printf("\n");
			}
			else
			{
				printf(", ");
			}
			i++;
	}
	return (0);
}
