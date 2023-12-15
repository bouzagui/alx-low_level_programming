#include <stdio.h>
/**
 * main - entry point.
 * description: funtion to be print alphabet in lowercase.
 * 
 * Return: Always 0.
*/
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}