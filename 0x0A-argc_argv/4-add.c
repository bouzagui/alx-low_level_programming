#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Enty point.
 * @argc: Number of arguments.
 * @argv: Command line arguments.
 * Return: Always 0.
*/
int main(int argc, char **argv)
{
	int num = 0;
	int i, j;

	if (argc == 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (!isdigit(argv[i][j != '\0']))
				{
					printf("Error\n");
					return (1);
				}
			}
			num += atoi(argv[i]);
		}
		printf("%d\n", num);
	}
	return (0);
}
