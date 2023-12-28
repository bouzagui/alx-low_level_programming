#include <stdio.h>

/**
 * multiplication - function to be the sum of multiplications 3 & 5.
 *
 * Return: sum of multiplications.
*/

int multiplication(void)
{
	int sum = 0;
	int i = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
		i++;
	}
	return (sum);
}
/**
 * main - Entry point.
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int i;

	i = multiplication();
	printf("%d\n", i);
	return (0);
}
