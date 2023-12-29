#include <stdio.h>

/**
 * main - Prints the Fibonacci of the first 50.
 *
 * Return: Always 0 on success.
*/
int main(void)
{
	int i = 0;
	unsigned long a = 0, b = 1, sum;

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
