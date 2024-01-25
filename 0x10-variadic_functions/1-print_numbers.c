#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print numbers in the given string format.
 * @separator: the separator string.
 * @n: the number to print.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;

	va_start(num, n);
	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(num, int));
		if (separator != NULL && i != n)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(num);
}
