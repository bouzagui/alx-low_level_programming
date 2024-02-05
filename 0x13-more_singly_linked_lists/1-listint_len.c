#include "lists.h"
/**
 * listint_len - instialisation element.
 * @h: pointer to the list.
 * Return: number of elements.
*/
size_t listint_len(const listint_t *h)
{
	const listint_t *list = h;
	size_t count = 0;

	while (list != NULL)
	{
		count++;
		list = list->next;
	}
	return (count);
}
