#include "main.h"

/**
 * power_recursion  - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if it's a palindrome, 0 if it's not.
 */
int is_palindrome(char *s);
int palindrome_check(char *s, int a, int b, int c);
int power_recursion(char *s)
{
	int index = 0;

	if (*s > '\0')
		index += power_recursion(s + 1) + 1;

	return (index);
}

/**
 * is_palindrome  - Returns the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int is_palindrome(char *s)
{
	int b = power_recursion(s);

	return (palindrome_check(s, 0, b - 1, b % 2));
}

/**
 * palindrome_check - Recursively checks if a string is a palindrome.
 * @s: The string to check.
 * @a: An iterator.
 * @b: The length of the string.
 * @c: integer
 * Return: 1 if it's a palindrome, 0 if it's not.
 */

int palindrome_check(char *s, int a, int b, int c)
{
	if ((a == b && c != 0) || (a == b + 1 && c == 0))
		return (1);
	else if (s[a] != s[b])
		return (0);
	else
		return (palindrome_check(s, a + 1, b - 1, c));
}
