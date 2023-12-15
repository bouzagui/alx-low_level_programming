#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Positive or negative integer numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
