#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0 on success.
*/
int main(void)
{
	long a = 0, b = 1, sum = 0;
	int i = 0;

	while (i < 50)
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
			i++;
	}
	return (0);
}
