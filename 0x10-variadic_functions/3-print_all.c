#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_all - Prints all of the arguments when specified
 * @format: specifies the necessary operations
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i;
	int sep;
	char *str;
	va_list args;

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				sep = 0;
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				sep = 0;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				sep = 0;
				break;
			case 's':
				str = va_arg(args, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				sep = 0;
				break;
			default:
				sep = 1;
				break;
		}
		if (format[i + 1] != '\0' && sep == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
