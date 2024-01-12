#include <stdio.h>
/**
 * main - Enter point.
 * @argc: Number of arguments
 * @argv: Array of arguments.
 * Retrun: Always 0 (success)
*/
int main(int argc, char **argv)
{
	if (argc >= 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
