#include "lists.h"

/**
 * list_len - length of the list.
 * @h: pointer to the list.
 * Return: the length of the list.
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *ifr = h;

	while (ifr != NULL)
	{
		count++;
		ifr = ifr->next;
	}
	return (count);
}
