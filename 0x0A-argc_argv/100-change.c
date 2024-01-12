#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the minimum number of coins to make change
 * for an Amount of money.
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0, 1
 *
 */
int main(int argc, char **argv)
{
	int sum = 0;
	int i, j;
	int coints[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	sum = atoi(argv[1]);
	j = 0;

	if (sum < 0)
	{
		printf("0\n");
		return (0);
	}
	i = 0;
	while (i < 5 && sum >= 0)
	{
		while (sum >= coints[i])
		{
			j++;
			sum -= coints[i];
		}
		i++;
	}
	printf("%d\n", j);
	return (0);
}
