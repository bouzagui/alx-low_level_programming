#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: operator
 * @argv: function array
 *
 * Return: Always 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int index, num;
	char *func;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	index = atoi(argv[1]);
	func = argv[2];
	num = atoi(argv[3]);

	if (get_op_func(func) == NULL || func[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*func == '/' && num == 0) || (*func == '%' && num == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(func)(index, num));

	return (0);
}
