#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - The sum of two integer
 * @a: intger 1
 * @b: intger 2
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - the difference of two integers
 * @a: integer 1
 * @b: integer 2
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - the difference of two anteger
 * @a: integer 1
 * @b: integer 2
 * Return: returns the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - the result of the division of two integer
 * @a: integer 1
 * @b: integer 2
 * Return: returns the result of the division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - The product of two integer
 * @a: integer 1
 * @b: integer 2
 * Return: returns the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
