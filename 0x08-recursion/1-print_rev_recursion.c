#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse.
 * @s: the string to print
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}
  	printf("\n");
}
