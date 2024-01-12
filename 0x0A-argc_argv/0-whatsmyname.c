#include <stdio.h>
/**
 * main - printed the name of the file
 * @argc: number of arguments
 * @argv: arguments.
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
