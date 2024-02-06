#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node from the index.
 * @head: the node to delete.
 * @index: the index of the node to delete.
 * Return: the index of the node.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur = *head;
	listint_t *prev = NULL;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(cur);
		return (1);
	}

	for (i = 0; cur != NULL && i < index; i++)
	{
		prev = cur;
		cur = cur->next;
	}

	if (cur == NULL)
	{
		return (-1);
	}
	prev->next = cur->next;

	free(cur);
	return (1);
}
