#include "lists.h"
/**
 * add_nodeint - add a node to the list.
 * @head: the head of the list.
 * @n: the number of nodes to add.
 * Return: the number of nodes added.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	else
	{
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
	}
	return (newnode);
}
