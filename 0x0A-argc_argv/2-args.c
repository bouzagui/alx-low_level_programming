#include <stdio.h>
/**
 * main - Entry point.
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: Always 0.
*/
int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i++]);
	}
	return (0);
}
