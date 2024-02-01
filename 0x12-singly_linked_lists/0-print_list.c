#include "lists.h"

/**
 * print_list - print a list of objects.
 * @h: the header.
 * Return: the number of objects.
*/
size_t print_list(const list_t *h)
{
	size_t count;
	const list_t *corr = h;

	count = 0;
	while (corr != NULL)
	{
		if (corr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", corr->len, corr->str);
		}
		count++;
		corr = corr->next;
	}
	return (count);
}
