#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * is_digit - Checks if a string contains only digits
 * @c: The input string to check
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */

int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

void error_and_exit(void)
{
	int i;
	char error[] = "Error\n";

	for (i = 0; error[i]; i++)
    {
		_putchar(error[i]);
    }
	exit(98);
}

/**
 * multiply - Converts a string to an integer
 * @num1: The first string
 * @num2: The second string
 * Return: The integer value of the string
 */
void multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, result_len;
    int i, j, b, carry, n1, n2;
    int temp, leading_zeros;
    int *result;

	while (num1[len1] || num2[len2])
	{
		if (num1[len1] && !is_digit(num1[len1]))
			 error_and_exit();
		if (num2[len2] && !is_digit(num2[len2]))
			error_and_exit();
		len1++;
		len2++;
	}

	result_len = len1 + len2;
	*result = calloc(result_len, sizeof(int));

    if (result == NULL)
    {
        exit(0);
    }

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		n1 = num1[i] - '0';

		for (j = len2 - 1; j >= 0; j--)
        {
			n2 = num2[j] - '0';
			temp = n1 * n2 + result[i + j + 1] + carry;

			result[i + j + 1] = temp % 10;
			carry = temp / 10;
        }

		result[i] += carry;
	}
	leading_zeros = 0;

	while (leading_zeros < result_len - 1 && result[leading_zeros] == 0)
		leading_zeros++;

	for (b = leading_zeros; b < result_len; b++)
		_putchar(result[b] + '0');

	_putchar('\n');

	free(result);
}

/**
 * main - Multiplies two positive numbers and prints the result
 * @argc: The number of command-line arguments
 * @argv: The array of command-line arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		error_and_exit();
	}

	multiply(argv[1], argv[2]);

	return (0);
}
