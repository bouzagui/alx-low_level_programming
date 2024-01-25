#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *ope = (char *) main;
	int index, num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
	printf("Error\n");
	exit(2);
	}

	for (index = 0; index < num_bytes; index++)
	{
		printf("%02x", ope[index] & 0xFF);
		if (index != num_bytes - 1)
		printf(" ");
	}

	printf("\n");
	return (0);
}
