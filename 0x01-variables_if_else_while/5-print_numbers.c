#include <stdio.h>

/**
 * main - Entry point.
 * Description: function to be printed numbers without ASCII.
 * Return: Always 0.
*/
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
    return (0);
}