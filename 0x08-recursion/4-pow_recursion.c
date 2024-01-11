#include "main.h"
/**
 * _pow_recursion - function to be calculated powers numbers.
 * @x: number
 * @y: power number
 * Return: result of the calculation of the power.
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
