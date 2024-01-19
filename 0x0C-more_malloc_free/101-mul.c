#include <stdio.h>
#include <stdlib.h>

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
	printf("Error\n");
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
	int len1 = 0, len2 = 0;

	while (num1[len1] || num2[len2])
	{
		if (num1[len1] && !is_digit(num1[len1]))
			 error_and_exit();
		if (num2[len2] && !is_digit(num2[len2]))
			error_and_exit();
		len1++;
		len2++;
	}

	int result_len = len1 + len2;
	int *result = calloc(result_len, sizeof(int));

	for (int i = len1 - 1; i >= 0; i--)
	{
		int carry = 0;
		int n1 = num1[i] - '0';

		for (int j = len2 - 1; j >= 0; j--)
			int n2 = num2[j] - '0';
			int temp = n1 * n2 + result[i + j + 1] + carry;

			result[i + j + 1] = temp % 10;
			carry = temp / 10;

		result[i] += carry;
	}
	int leading_zeros = 0;

	while (leading_zeros < result_len - 1 && result[leading_zeros] == 0)
		leading_zeros++;

	for (int i = leading_zeros; i < result_len; i++)
		printf("%d", result[i]);
	printf("\n");

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
