#include "lists.h"
/**
 * insert_nodeint_at_index - function for inserting a node into.
 * @head: the head of the list.
 * @idx: the index of the node.
 * @n: the number of the node.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));
	listint_t *tmp = *head;
	unsigned int i;

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	for (i = 0; tmp != NULL && i < idx - 1; i++)
	{
		tmp = tmp->next;
	}
	if (tmp == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->next = tmp->next;
	tmp->next = newnode;

	return (newnode);
}
