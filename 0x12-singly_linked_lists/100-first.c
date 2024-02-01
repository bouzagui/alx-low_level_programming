#include <stdio.h>

/**
 * print_function - function to be printed 2 lines.
 * Return: nothing.
*/
void __attribute__((constructor)) print_function(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
