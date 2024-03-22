#include "lists.h"
/**
 * dlistint_len - prints all the elements of a dlistint_t list
 * @h: head of the list
 * Return: the number of nodes.
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
