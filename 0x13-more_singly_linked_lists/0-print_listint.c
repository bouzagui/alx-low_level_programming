#include "lists.h"

/**
 * print_listint - print a list of integers.
 * @h: the header of the message.
 * Return: the number of bytes.
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *p = h;
	size_t count = 0;

	while (p != NULL)
	{
		printf("%i\n", p->n);
		count++;
		p = p->next;
	}
	return (count);
}
