#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - print all functions.
 * @format: function name to print.
*/
void print_all(const char * const format, ...)
{
	int i;
	int separator;
	char *str;
	va_list args;

	va_start(args, format);
	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		switch (format[i])
		{
			case 'c':
					printf("%c", va_arg(args, int));
					separator = 0;
					break;
			case 'i':
					printf("%i", va_arg(args, int));
					separator = 0;
					break;
			case 'f':
					printf("%f", va_arg(args, double));
					separator = 0;
					break;
			case 's':
					str = va_arg(args, char*);
					if (str == NULL)
						printf("(nil)");
					printf("%s", str);
					separator = 0;
					break;
			default:
					separator = 1;
					break;
		}
		if (format[i + 1] != '\0' && separator == 0)
			printf(", ");
	}
	va_end(args);
	printf("\n");
}
