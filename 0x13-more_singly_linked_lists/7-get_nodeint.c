#include "lists.h"

/**
 * get_nodeint_at_index - get the node int at index.
 * @head: the head of the list.
 * @index: the index of the node.
 * Return: the node int at index or NULL if it is not found.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i;

	while (head != NULL)
	{
		for (i = 0; node != NULL && i < index; i++)
		{
			node = node->next;
		}
		return (node);
	}
	return (NULL);
}
