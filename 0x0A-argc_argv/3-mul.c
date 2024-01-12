#include <stdio.h>
#include <stdlib.h>
/**
 * main - Enter point.
 *
 * @argc: Number of arguments.
 * @argv: array of arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}
	return (0);
}
