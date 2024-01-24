#include "function_pointers.h"
/**
 * print_name - function name for printing
 * @name: name of function.
 * @f: function pointer.
*/
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	f(name);
}
