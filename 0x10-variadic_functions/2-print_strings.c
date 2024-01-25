#include "variadic_functions.h"
#include <stdio.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char* str;
	va_list arg;

	va_start(arg, n);
	for (i = 1; i <= n; i++)
	{
        str = va_arg(arg, char*);
		if (str == NULL)
		{
        	printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && i < n)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arg);
}